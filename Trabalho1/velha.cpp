#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int jogador1, jogador0;
    int jogadas = 0;
    int i, j;
    int a1, a2, a3, b1, b2, b3, c1, c2, c3;
    while(jogadas <= 9){
        cin >> i >> j;
        if(jogadas%2 == 0){             //Isso define de quem é a jogada, pois jogadas "pares" são do jogador1 e "ímpares" do jogador0
            if(i==1 && j==1)
                a1 = 1;
            if(i==1 && j==2)            // Sendo: a1|a2|a3
                a2 = 1;                 //        b1|b2|b3
            if(i==1 && j==3)            //        c1|c2|c3
                a3 = 1;
            if(i==2 && j==1)
                b1 = 1;
            if(i==2 && j==2)
                b2 = 1;
            if(i==2 && j==3)
                b3 = 1;
            if(i==3 && j==1)
                c1 = 1;
            if(i==3 && j==2)
                c2 = 1;
            if(i==3 && j==3)
                c3 = 1;
            jogadas++;
        }
        else{
            if(i==1 && j==1)
                a1 = 0;
            if(i==1 && j==2)
                a2 = 0;
            if(i==1 && j==3)
                a3 = 0;
            if(i==2 && j==1)
                b1 = 0;
            if(i==2 && j==2)
                b2 = 0;
            if(i==2 && j==3)
                b3 = 0;
            if(i==3 && j==1)
                c1 = 0;
            if(i==3 && j==2)
                c2 = 0;
            if(i==3 && j==3)
                c3 = 0;
            jogadas++;
        }
        //Agora cosideramos as possibilidades para que "1" ganhe.
        if(a1==1 && a2==1 && a3==1){
            cout << "Vitoria 1" << endl;
            break;
        }
        if(b1==1 && b2==1 && b3==1){
            cout << "Vitoria 1" << endl;
            break;
        }
        if(c1==1 && c2==1 && c3== 1){
            cout << "Vitoria 1" << endl;
            break;
        }
        if(a1==1 && b1==1 && c1==1){
            cout << "Vitoria 1" << endl;
            break;
        }
        if(a2==1 && b2==1 && c2==1){
            cout << "Vitoria 1" << endl;
            break;
        }
        if(a3==1 && b3==1 && c3==1){
            cout << "Vitoria 1" << endl;
            break;
        }
        if(a1==1 && b2==1 && c3==1){
            cout << "Vitoria 1" << endl;
            break;
        }
        if(a3==1 && b2==1 && c1==1){
            cout << "Vitoria 1" << endl;
            break;
        }

        //Cosinderando, agora, as possibilidades do jogador0 vencer.
        if(a1==0 && a2==0 && a3==0){
            cout << "Vitoria 0" << endl;
            break;
        }
        if(b1==0 && b2==0 && b3==0){
            cout << "Vitoria 0" << endl;
            break;
        }
        if(c1==0 && c2==0 && c3== 0){
            cout << "Vitoria 0" << endl;
            break;
        }
        if(a1==0 && b1==0 && c1==0){
            cout << "Vitoria 0" << endl;
            break;
        }
        if(a2==0 && b2==0 && c2==0){
            cout << "Vitoria 0" << endl;
            break;
        }
        if(a3==0 && b3==0 && c3==0){
            cout << "Vitoria 0" << endl;
            break;
        }
        if(a1==0 && b2==0 && c3==0){
            cout << "Vitoria 0" << endl;
            break;
        }
        if(a3==0 && b2==0 && c1==0){
            cout << "Vitoria 0" << endl;
            break;
        }
        //Se nada disso acontecer
        if(jogadas>8){
            cout << "Empate" << endl;
            break;
        }
    }


    return 0;
}
