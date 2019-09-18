#include <iostream>

using namespace std;


int main(){
    int a,b;


    int jogo[4][4];

    //incializando a array
    for(int i=1;i<=3;i++)
        for(int c=1;c<=3;c++)
            jogo[i][c] = 10;

    int i = 1;
    int jogadoratual = 1;
    while(i<=9)
    {

        cin >> a >> b;

        jogo[a][b] = jogadoratual;


        for(int i=1;i<=3;i++)
        {
            if(jogo[i][1]==jogo[i][2] && jogo[i][1]==jogo[i][3] && jogo[i][3]!=10)
           {
               cout << "Vitoria " << jogo[i][1] << endl;
               return 0;
           }
            if(jogo[1][i]==jogo[2][i] && jogo[1][i]==jogo[3][i] && jogo[3][i]!=10)
                {
                cout << "Vitoria " << jogo[1][i] << endl;
                return 0;
           }
            if(jogo[1][1]==jogo[2][2] && jogo[1][1]==jogo[3][3] && jogo[3][3]!=10)
                {
                cout << "Vitoria " << jogo[1][1] << endl;
                return 0;
           }
            if(jogo[3][1]==jogo[2][2] && jogo[3][1]==jogo[1][3] && jogo[1][3]!=10)
                {
                cout << "Vitoria " << jogo[3][1] << endl;
                return 0;
           }
        }

        if(jogadoratual==1) jogadoratual = 0;
        else if(jogadoratual==0) jogadoratual = 1;
        i++;
    }
    cout << "Empate" << endl;

    return 0;
}
