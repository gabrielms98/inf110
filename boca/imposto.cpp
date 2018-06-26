#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double imposto(double valor){
    double pagar;
    if(valor>0 && valor<=21453.24)
        pagar=0.00;
    else if(valor>=21453.25 && valor<=32151.48)
        pagar=(0.075*valor)-1608.99;
    else if(valor>=32151.49 && valor<=42869.16)
        pagar=(0.15*valor)-4020.35;
    else if(valor>=42869.17 && valor <=53565.72)
        pagar=(0.225*valor)-7235.54;
    else if(valor>53565.72)
        pagar=(0.275*valor)-9913.83;

    return pagar;
}
int main(){
    double r;
    while(1){
        cin >> r;
        if(r==0)
            break;
        cout << fixed << setprecision(2) << "R$ " << imposto(r) << endl;
    }

    return 0;
}
