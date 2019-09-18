#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int cont = 0;
    int anterior;
    int placaperdida;

    while(cont<(b-a))
    {
        int leitura;
        cin >> leitura;

        if(cont==0) //primeira rodagem do while, populemos as vars... pressuponho q n haverá testes com placa faltando na primeira leitura
        {
            anterior = leitura;
            cont++;
            continue;
        }

        if(leitura>anterior) //ordem crescente
        {
            if(anterior!=(leitura-1)) placaperdida = leitura-1;
        }
        else //ordem decrescente
        {
            if(anterior!=(leitura+1)) placaperdida = leitura+1;
        }

        anterior = leitura;
        cont++;
    }

    cout << placaperdida << endl;

return 0;
}
