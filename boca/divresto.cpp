#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool divresto(int dividendo, int divisor, int &quociente, int &resto){
    if(divisor==0)
        return false;
    quociente=dividendo/divisor;
    resto=dividendo%divisor;
    return true;
}

int main(){
    int contador=1, n;
    int dividendo, divisor, quociente=0, resto=0;
    cin >> n;
    while(contador<=n){
        cin >> dividendo >> divisor;
        if(divresto(dividendo, divisor, quociente, resto))
            cout << quociente << " " << resto << endl;
        else cout << "indefinido" << endl;
        contador++;
    }


    return 0;
}
