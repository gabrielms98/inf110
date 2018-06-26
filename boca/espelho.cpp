#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int espelhar(int &a){
    int m, c, d, u;
    int espelho;
    u=(a%10);
    a-=u;
    a/=10;
    d=(a%10);
    a-=d;
    a/=10;
    c=(a%10);
    a-=c;
    a/=10;
    m=(a%10);
    espelho=(u*1000)+(d*100)+(c*10)+(m*1);
    return espelho;
}

int main(){
    int A, B;
    while(1){
        cin >> A >> B;
        if(A==0 && B==0)
            break;
        else if(espelhar(A)==B)
            cout << "espelho" << endl;
        else cout << "nao espelho" << endl;
    }

    return 0;
}
