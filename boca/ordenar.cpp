#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void ordenar(int &a, int &b, int &c){
    if(a>b){
        int aux=a;
        a=b;
        b=aux;
    }
    if(b>c){
        int aux=b;
        b=c;
        c=aux;
    }
    if(a>b){
        int aux=b;
        b=a;
        a=aux;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    ordenar(a, b, c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}

