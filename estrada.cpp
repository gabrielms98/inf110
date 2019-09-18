#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b;
    int km;
    cin >> a >> b;
    int x;
    int contador = 0;
    int perdido;
    while(contador < b - a){
        cin >> km;
        if(contador == 0){
            x = km;
            contador++;
            continue;
        }
        if(km > x)
            if(x != km - 1)
                perdido = km - 1;
        else if(x != km + 1)
            perdido = km + 1;
        x = km;
        contador++;
    }

    cout << perdido << endl;


    return 0;
}

