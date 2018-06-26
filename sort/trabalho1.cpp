// inf 110 - trabalho
// @authors: Matheus Henrique de Freitas (ES92571) and Gabriel Martins Silva (ES?)

#include <iostream>
#include <fstream>
#include <string.h>
#include <cctype>
#include <cmath>

using namespace std;

int opcoes();


int main()
{
    string nome,nomef,alteracoes=" ";
    ifstream arqentrada;
    ofstream arqsaida;
    char tipo[4], c, comentario[200], a;
    int f,o,i,h,j,l,largura, altura, valor;
    float valorf;
    bool conversao=false;

    cout << "Nome do arquivo (com a extensão .pnm): ";
    cin >> nome;


    /* Nos consultamos a documentação do header fstream para complementar nosso trabalho.
    http://www.cplusplus.com/reference/fstream/ */

    arqentrada.open(nome,ios::in);

    if(!arqentrada.is_open())
    {
        cout << "Arquivo nao encontrado!" << endl;
        return 0;
    }


    //$ essas sao funcoes de extração ou seja, elas retornam e apos retornar REMOVEM do stream o que foi retornado.
    arqentrada >> tipo;  //$ ele extrae ate espaço ou fim da linha | http://www.cplusplus.com/reference/istream/istream/operator-free/
    arqentrada.get();    //$ .get extrae apenas UM CARACTERE, como o P3 foi removido na funcao acima, espera-se que o que sobraria pra ser removido é o eol (/n)

    //$ o >> le/extrae até chegar no \n (e' como se os \n n existissem para ele), portanto pra ser possivel o .get abaixo detectar o primeiro caractere,
    //$ deve-se extrair o \n do stream com o .get acima, ja que se n fizesse isso, o .get de baixo leria ele, ja que .get le \n.

    while((c = arqentrada.get()) == '#')
        arqentrada.getline(comentario,200); //subentede-se que nao havera comentario com mais de 200 caracteretes

    arqentrada.putback(c); //$ Como o ultimo caractere a rodar no while é extraido, coloquemos ele de volta no stream. a famosa gambiarra haha

    arqentrada >> largura >> altura >> valor;



    if(strcmp(tipo,"P2")==0) //tons de cinza
    {
        unsigned char imagemf[altura][largura];

        for(i=0;i<altura;i++)
            for(j=0;j<largura;j++) {
                arqentrada >> valor;
                imagemf[i][j] = (unsigned char)valor;
            }

        arqentrada.close();


        while(1){
            if((o = opcoes())==1) // escurecer
            {
                cout << "Digite o fator de escurecimento (1-255): ";
                cin >> f;

                for(i=0;i<altura;i++)
                  for(j=0;j<largura;j++) {

                    valor = (int)imagemf[i][j];
                    valor -= f;
                    if (valor<0)
                      valor = 0;
                    imagemf[i][j] = (unsigned char)valor;
                  }

                  cout << "Imagem escurecida ! \n";
                  alteracoes = alteracoes+"escurecimento /";
            }
            else if(o==2)              // clarear
            {
                cout << "Digite o fator de clareamento (1-255): ";
                cin >> f;

                for(i=0;i<altura;i++)
                  for(j=0;j<largura;j++) {

                    valor = (int)imagemf[i][j];
                    valor += f;
                    if (valor>255)
                      valor = 255;
                    imagemf[i][j] = (unsigned char)valor;
                  }
                  cout << "Imagem clareada ! \n";
                  alteracoes = alteracoes+" clareamento /";
            }
            else if(o==3)              // negativo
            {
                for(i=0;i<altura;i++)
                  for(j=0;j<largura;j++) {

                    valor = (int)imagemf[i][j];
                    valor -= 255;
                    valor = abs(valor);

                    imagemf[i][j] = (unsigned char)valor;
                  }
                  cout << "Negativo aplicado a imagem ! \n";
                  alteracoes = alteracoes+" negativo /";
            }
            else if(o==4)              // espelhar
            {

                unsigned char imagemc[altura][largura];

                for(i=0;i<altura;i++) //copiando matriz
                    for(j=0;j<largura;j++) {
                        imagemc[i][j] = imagemf[i][j];
                    }

                for(i=0;i<altura;i++)
                  for(j=0;j<largura;j++) {
                    valor = abs(j-largura);
                    imagemf[i][j] = imagemc[i][valor];
                  }
                  cout << "Espelhamento aplicado a imagem ! \n";
                  alteracoes = alteracoes+" espelhamento /";
            }
            else if(o==5)              // sobel
            {
                int gdey[3][3] ={ {1,2,1}, {0,0,0}, {-1,-2,-1} };

                int gdex[3][3] ={ {1,0,-1}, {2,0,-2}, {1,0,-1} };

                unsigned char imagemc[altura+2][largura+2] = {0};

                for(i=0;i<altura+2;i++)
                    for(j=0;j<largura+2;j++)
                            imagemc[i][j]=(unsigned char)0;


                for(i=1;i<altura+1;i++)
                    for(j=1;j<largura+1;j++)
                            imagemc[i][j] = imagemf[i-1][j-1];


                for(i=1;i<altura+1;i++)
                    for(j=1;j<largura+1;j++)
                    {
                        valor=0;

                        valor += gdey[1][1]*(int)imagemc[i][j]
                        +gdey[0][0]*(int)imagemc[i-1][j-1]
                        +gdey[0][1]*(int)imagemc[i-1][j]
                        +gdey[0][2]*(int)imagemc[i-1][j+1]

                        +gdey[1][0]*(int)imagemc[i][j-1]
                        +gdey[1][2]*(int)imagemc[i][j+1]

                        +gdey[2][0]*(int)imagemc[i+1][j-1]
                        +gdey[2][1]*(int)imagemc[i+1][j]
                        +gdey[2][2]*(int)imagemc[i+1][j+1];

                        if(valor<0) valor=0;
                        else if(valor>255) valor=255;

                        imagemf[i-1][j-1] = (unsigned char)valor;
                    }

                for(i=1;i<altura+1;i++)
                    for(j=1;j<largura+1;j++)
                    {
                        valor=0;

                        valor += gdex[1][1]*(int)imagemc[i][j]
                        +gdex[0][0]*(int)imagemc[i-1][j-1]
                        +gdex[0][1]*(int)imagemc[i-1][j]
                        +gdex[0][2]*(int)imagemc[i-1][j+1]

                        +gdex[1][0]*(int)imagemc[i][j-1]
                        +gdex[1][2]*(int)imagemc[i][j+1]

                        +gdex[2][0]*(int)imagemc[i+1][j-1]
                        +gdex[2][1]*(int)imagemc[i+1][j]
                        +gdex[2][2]*(int)imagemc[i+1][j+1];

                        if(valor<0) valor=0;
                        else if(valor>255) valor=255;

                        valor = ((int)imagemf[i-1][j-1]+valor)/2;

                        imagemf[i-1][j-1] = (unsigned char)valor;
                    }


                  cout << "Filtro de Sobel aplicado a imagem ! \n";
                  alteracoes = alteracoes+" filtro de sobel /";
            }
            else if(o==6)
            {
                int gdey[3][3] ={ {0,-1,0}, {-1,4,-1}, {0,-1,0} };

                unsigned char imagemc[altura+2][largura+2] = {0};

                for(i=0;i<altura+2;i++)
                    for(j=0;j<largura+2;j++)
                        imagemc[i][j]=(unsigned char)0;


                for(i=1;i<altura+1;i++)
                    for(j=1;j<largura+1;j++)
                        imagemc[i][j] = imagemf[i-1][j-1];


                for(i=1;i<altura+1;i++)
                    for(j=1;j<largura+1;j++)
                    {
                        valor=0;

                        valor += gdey[1][1]*(int)imagemc[i][j]
                        +gdey[0][0]*(int)imagemc[i-1][j-1]
                        +gdey[0][1]*(int)imagemc[i-1][j]
                        +gdey[0][2]*(int)imagemc[i-1][j+1]

                        +gdey[1][0]*(int)imagemc[i][j-1]
                        +gdey[1][2]*(int)imagemc[i][j+1]

                        +gdey[2][0]*(int)imagemc[i+1][j-1]
                        +gdey[2][1]*(int)imagemc[i+1][j]
                        +gdey[2][2]*(int)imagemc[i+1][j+1];

                        if(valor<0) valor=0;
                        else if(valor>255) valor=255;

                        imagemf[i-1][j-1] = (unsigned char)valor;
                    }



                  cout << "Filtro de Laplace aplicado a imagem ! \n";
                  alteracoes = alteracoes+" filtro de Laplace /";
            }

            cout << "Deseja aplicar outra alteracao a essa imagem? S(im) / N(ao): ";
            cin >> a;

            cin.ignore(10000,'\n'); //$ como o sujeito pode acabar digitando sim ou nao ao inves de apenas s e n, o char so tem tamanho um,
                                    //$ logo os chars 'im' ou 'ao' ficariam no buffer do stream e iria bugar tudo.

            if(tolower(a)=='s') // http://www.cplusplus.com/reference/cctype/tolower/ $ pra caso o sujeito digite leta maiscula
                continue;
            else if(tolower(a)=='n') break;
            else
            {
                cout << "Opcao invalida";
                return 0;
            }
        }

        cout << "Nome do novo arquivo a ser salvo (com a extensão .pnm): ";
        cin >> nomef;
        cout << "Salvando... \n";

        arqsaida.open(nomef,ios::out);

        arqsaida << tipo << endl;
        arqsaida << "# INF110\n";
        arqsaida << largura << " " << altura << endl;
        arqsaida << 255 << endl;
        for(i=0;i<altura;i++)
          for(j=0;j<largura;j++)
            arqsaida << (int)imagemf[i][j] << endl;

        arqsaida.close();

        cout << nomef << " foi salvo!! \n";

    }
    else if(strcmp(tipo,"P3")==0) //colorful
    {
        unsigned char imagemf[altura][largura][3];

        for(i=0;i<altura;i++)
            for(j=0;j<largura;j++) {
                arqentrada >> valor;
                imagemf[i][j][0] = (unsigned char)valor; //r
                arqentrada >> valor;
                imagemf[i][j][1] = (unsigned char)valor; //g
                arqentrada >> valor;
                imagemf[i][j][2] = (unsigned char)valor; //b
            }

        arqentrada.close();


        while(1){
            if((o = opcoes())==1) // escurecer
            {
                cout << "Digite o fator de escurecimento (1-255): ";
                cin >> f;

                for(i=0;i<altura;i++)
                  for(j=0;j<largura;j++) {
                    //r
                    valor = (int)imagemf[i][j][0];
                    valor -= f;
                    if (valor<0)
                      valor = 0;
                    imagemf[i][j][0] = (unsigned char)valor;

                    //g
                    valor = (int)imagemf[i][j][1];
                    valor -= f;
                    if (valor<0)
                      valor = 0;
                    imagemf[i][j][1] = (unsigned char)valor;

                    //b
                    valor = (int)imagemf[i][j][2];
                    valor -= f;
                    if (valor<0)
                      valor = 0;
                    imagemf[i][j][2] = (unsigned char)valor;
                  }

                  cout << "Imagem escurecida ! \n";
                  alteracoes = alteracoes+"escurecimento /";
            }
            else if(o==2)              // clarear
            {
                cout << "Digite o fator de clareamento (1-255): ";
                cin >> f;

                for(i=0;i<altura;i++)
                  for(j=0;j<largura;j++) {
                    //r
                    valor = (int)imagemf[i][j][0];
                    valor += f;
                    if (valor>255)
                      valor = 255;
                    imagemf[i][j][0] = (unsigned char)valor;

                    //g
                    valor = (int)imagemf[i][j][1];
                    valor += f;
                    if (valor>255)
                      valor = 255;
                    imagemf[i][j][1] = (unsigned char)valor;

                    //b
                    valor = (int)imagemf[i][j][2];
                    valor += f;
                    if (valor>255)
                      valor = 255;
                    imagemf[i][j][2] = (unsigned char)valor;
                  }
                  cout << "Imagem clareada ! \n";
                  alteracoes = alteracoes+" clareamento /";
            }
            else if(o==3)              // negativo
            {
                for(i=0;i<altura;i++)
                  for(j=0;j<largura;j++) {
                    //r
                    valor = (int)imagemf[i][j][0];
                    valor -= 255;
                    valor = abs(valor);

                    imagemf[i][j][0] = (unsigned char)valor;

                    //g
                    valor = (int)imagemf[i][j][1];
                    valor -= 255;
                    valor = abs(valor);

                    imagemf[i][j][1] = (unsigned char)valor;

                    //b
                    valor = (int)imagemf[i][j][2];
                    valor -= 255;
                    valor = abs(valor);

                    imagemf[i][j][2] = (unsigned char)valor;
                  }
                  cout << "Negativo aplicado a imagem ! \n";
                  alteracoes = alteracoes+" negativo /";
            }
            else if(o==4)              // espelhar
            {

                unsigned char imagemc[altura+1][largura+1][3];

                for(i=0;i<altura;i++) //copiando matriz
                    for(j=0;j<largura;j++) {
                        imagemc[i][j][0] = imagemf[i][j][0];
                        imagemc[i][j][1] = imagemf[i][j][1];
                        imagemc[i][j][2] = imagemf[i][j][2];
                    }

                for(i=0;i<altura;i++)
                  for(j=0;j<largura;j++) {
                    valor = abs(j-largura);
                    imagemf[i][j][0] = imagemc[i][valor][0];
                    imagemf[i][j][1] = imagemc[i][valor][1];
                    imagemf[i][j][2] = imagemc[i][valor][2];
                  }
                  cout << "Espelhamento aplicado a imagem ! \n";
                  alteracoes = alteracoes+" espelhamento /";
            }
            else if(o==5)              // sobel
            {
                int gdey[3][3] ={ {1,2,1}, {0,0,0}, {-1,-2,-1} };

                int gdex[3][3] ={ {1,0,-1}, {2,0,-2}, {1,0,-1} };

                unsigned char imagemc[altura+2][largura+2][3] = {0};

                for(i=0;i<altura+2;i++)
                    for(j=0;j<largura+2;j++)
                        for(h=0;h<=2;h++)
                            imagemc[i][j][h]=(unsigned char)0;


                for(i=1;i<altura+1;i++)
                    for(j=1;j<largura+1;j++)
                        for(h=0;h<=2;h++)
                            imagemc[i][j][h] = imagemf[i-1][j-1][h];


                for(i=1;i<altura+1;i++)
                    for(j=1;j<largura+1;j++)
                        for(h=0;h<=2;h++)
                        {
                            valor=0;

                            valor += gdey[1][1]*(int)imagemc[i][j][h]
                            +gdey[0][0]*(int)imagemc[i-1][j-1][h]
                            +gdey[0][1]*(int)imagemc[i-1][j][h]
                            +gdey[0][2]*(int)imagemc[i-1][j+1][h]

                            +gdey[1][0]*(int)imagemc[i][j-1][h]
                            +gdey[1][2]*(int)imagemc[i][j+1][h]

                            +gdey[2][0]*(int)imagemc[i+1][j-1][h]
                            +gdey[2][1]*(int)imagemc[i+1][j][h]
                            +gdey[2][2]*(int)imagemc[i+1][j+1][h];

                            if(valor<0) valor=0;
                            else if(valor>255) valor=255;

                            imagemf[i-1][j-1][h] = (unsigned char)valor;
                        }

                for(i=1;i<altura+1;i++)
                    for(j=1;j<largura+1;j++)
                        for(h=0;h<=2;h++)
                        {
                            valor=0;

                            valor += gdex[1][1]*(int)imagemc[i][j][h]
                            +gdex[0][0]*(int)imagemc[i-1][j-1][h]
                            +gdex[0][1]*(int)imagemc[i-1][j][h]
                            +gdex[0][2]*(int)imagemc[i-1][j+1][h]

                            +gdex[1][0]*(int)imagemc[i][j-1][h]
                            +gdex[1][2]*(int)imagemc[i][j+1][h]

                            +gdex[2][0]*(int)imagemc[i+1][j-1][h]
                            +gdex[2][1]*(int)imagemc[i+1][j][h]
                            +gdex[2][2]*(int)imagemc[i+1][j+1][h];

                            if(valor<0) valor=0;
                            else if(valor>255) valor=255;

                            valor = ((int)imagemf[i-1][j-1][h]+valor)/2;

                            imagemf[i-1][j-1][h] = (unsigned char)valor;
                        }


                  cout << "Filtro de Sobel aplicado a imagem ! \n";
                  alteracoes = alteracoes+" filtro de sobel /";
            }
            else if(o==6)              // laplace
            {
                int gdey[3][3] ={ {0,-1,0}, {-1,4,-1}, {0,-1,0} };

                unsigned char imagemc[altura+2][largura+2][3] = {0};

                for(i=0;i<altura+2;i++)
                    for(j=0;j<largura+2;j++)
                        for(h=0;h<=2;h++)
                            imagemc[i][j][h]=(unsigned char)0;


                for(i=1;i<altura+1;i++)
                    for(j=1;j<largura+1;j++)
                        for(h=0;h<=2;h++)
                            imagemc[i][j][h] = imagemf[i-1][j-1][h];


                for(i=1;i<altura+1;i++)
                    for(j=1;j<largura+1;j++)
                        for(h=0;h<=2;h++)
                        {
                            valor=0;

                            valor += gdey[1][1]*(int)imagemc[i][j][h]
                            +gdey[0][0]*(int)imagemc[i-1][j-1][h]
                            +gdey[0][1]*(int)imagemc[i-1][j][h]
                            +gdey[0][2]*(int)imagemc[i-1][j+1][h]

                            +gdey[1][0]*(int)imagemc[i][j-1][h]
                            +gdey[1][2]*(int)imagemc[i][j+1][h]

                            +gdey[2][0]*(int)imagemc[i+1][j-1][h]
                            +gdey[2][1]*(int)imagemc[i+1][j][h]
                            +gdey[2][2]*(int)imagemc[i+1][j+1][h];

                            if(valor<0) valor=0;
                            else if(valor>255) valor=255;

                            imagemf[i-1][j-1][h] = (unsigned char)valor;
                        }



                  cout << "Filtro de Laplace aplicado a imagem ! \n";
                  alteracoes = alteracoes+" filtro de Laplace /";
            }

            cout << "Deseja aplicar outra alteracao a essa imagem? S(im) / N(ao): ";
            cin >> a;

            cin.ignore(10000,'\n'); //$ como o sujeito pode acabar digitando sim ou nao ao inves de apenas s e n, o char so tem tamanho um,
                                    //$ logo os chars 'im' ou 'ao' ficariam no buffer do stream e iria bugar tudo.

            if(tolower(a)=='s') // http://www.cplusplus.com/reference/cctype/tolower/ $ pra caso o sujeito digite leta maiscula
                continue;
            else if(tolower(a)=='n') break;
            else
            {
                cout << "Opcao invalida";
                return 0;
            }
        }


        cout << "Deseja converter para tons de cinza ou manter a cor? M (manter) / C (converter): ";
        cin >> a;

        cin.ignore(10000,'\n');


        if(tolower(a)=='c')
        {
            unsigned char imagemc[altura+1][largura+1][3];

            for(i=0;i<altura;i++) //copiando matriz
                for(j=0;j<largura;j++) {
                    imagemc[i][j][0] = imagemf[i][j][0];
                    imagemc[i][j][1] = imagemf[i][j][1];
                    imagemc[i][j][2] = imagemf[i][j][2];
                }

            for(i=0;i<altura;i++)
                for(j=0;j<largura;j++)
                    imagemf[i][j][0] = (imagemc[i][j][0]+imagemc[i][j][1]+imagemc[i][j][2])/3;


            cout << "Imagem convertida para tons de cinza ! \n";
            alteracoes = alteracoes+" conversao para tons de cinza /";
            tipo[0] = 'P';
            tipo[1] = '2';
            conversao=true;
        }
        else if(tolower(a)!='m')
        {
            cout << "Opcao invalida";
            return 0;
        }



        cout << "Nome do novo arquivo a ser salvo (com a extensão .pnm): ";
        cin >> nomef;
        cout << "Salvando... \n";

        arqsaida.open(nomef,ios::out);


        arqsaida << tipo << endl;
        alteracoes = alteracoes.substr(0, alteracoes.length()-1); //removendo a barra do final
        arqsaida << "# INF110 | Alteracoes feitas:" << alteracoes << "\n";
        arqsaida << largura << " " << altura << endl;
        arqsaida << 255 << endl;
        for(i=0;i<altura;i++)
          for(j=0;j<largura;j++){
            arqsaida << (int)imagemf[i][j][0] << endl;
            if(!conversao)
            {
                arqsaida << (int)imagemf[i][j][1] << endl;
                arqsaida << (int)imagemf[i][j][2] << endl;
            }
          }

        arqsaida.close();

        cout << nomef << " foi salvo!! \n";
    }
    else
    {
        cout << "Imagem fora do formato ASC\n";
        arqentrada.close();
        return 0;
    }

    return 0;
}





int opcoes(){
    int opt;

    cout << "Opcoes:\n";
    cout << "1 - Escurecer\n2 - Clarear\n3 - Negativo\n4 - Espelhar\n5 - Filtro de Sobel\n6 - Filtro Laplace\n";


    cout << "\nDigite uma opcao (numero): ";
    cin >> opt;


    if((opt>=0 && opt<=8) || opt==21)
        return opt;
    else
    {
        cout << "\nOPCAO INVALIDA!!! \n";
        return opcoes();
    }


}
