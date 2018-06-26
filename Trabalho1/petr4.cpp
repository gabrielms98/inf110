#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int n;
    int topos=0, fundos=0;
    double p, p1;
    int contador=1;
    double tipo;                     //subindo=1 ou descendo=0
    cin >> n;
    while(contador<=n){
        cin >> p;
        if(contador==1){
            p1=p;
            contador++;
        }
        else if(contador==2){
            if(p>p1)
                tipo=1;
            else tipo=0;
            p1=p;
            contador++;
        }
        else{
            if(p>p1 && tipo==0){
                fundos++;
                tipo=1;
            }
            if(p<p1 && tipo==1){
                topos++;
                tipo=0;
            }
            p1=p;
            contador++;
        }
    }

    cout << topos << " " << fundos << endl;


    return 0;
}
