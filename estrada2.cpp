#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int a, b;
    cin >> a >> b;

    int cont = 0;
    int anterior;
    int placaperdida;

    while(cont<(b-a)){

        int leitura;
        cin >> leitura;

        if(cont==0){
            anterior = leitura;
            cont++;
            continue;
        }
        if(leitura>anterior)
            if(anterior!=(leitura-1))
                placaperdida = leitura-1;
        else
            if(anterior!=leitura+1)
                placaperdida = leitura+1;
        anterior = leitura;
        cont++;
    }

    cout << placaperdida << endl;

    return 0;
}

