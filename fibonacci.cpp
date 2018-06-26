#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    long long f = 0;
    long long soma = 0;
    long long somaanterior = 0;
    long long somaanteanterior = 0;

    if(n == 0){
        cout << "0" << endl;
        return 0;
    }

    while(f <= n){
        if(f == 1){
            somaanterior = 0;
            somaanteanterior = 0;
            soma = 1;
        }
        else if(f == 2){
            somaanteanterior = 0;
            somaanterior = soma;
            soma = somaanteanterior + somaanterior;
            }
        else if(f > 2){
            somaanteanterior = somaanterior;
            somaanterior = soma;
            soma = somaanteanterior + somaanterior;
            }
        f++;
    }
    cout << soma << endl;

    return 0;
}



