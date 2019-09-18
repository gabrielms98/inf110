#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Primos.cpp: imprime os primos no intervalo
bool eh_primo(int &i){
    bool primo=true;
    if(i==1)
        i++;
    for(int n=2; n<i; n++){
        if(i%n==0){
            primo=false;
            break;
        }
    }
    if(primo) return true;
    else return false;
}

int main() {
    int a, b;
    int i;

    cin >> a >> b;

    cout << "Primos entre " << a << " e " << b << ":";

    for(i = a; i <= b; i++)
        if (eh_primo(i))
            cout << " " << i;

    cout << endl;

    return 0;
}
