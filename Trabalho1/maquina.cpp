#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int p, v=0;
    int total=0;
    cin >> p;
    while(1){
        cin >> v;
        total += v;
        if(v==0)
            break;
    }
    if(total<p)
        cout << "Saldo insuficiente." << endl;
    else
        cout << "Troco de " << total-p << " centavos." << endl;

    return 0;
}
