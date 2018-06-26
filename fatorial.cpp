//Escreva um programa que recebe n e mostra n! na tela.
//n<0 não é valido e permite digitar um outro valor
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n < 0){
        cout << "Valor invalido" << endl;
        cin >> n;
    }
    int resp = 1;
    while(n > 0){
        resp *= n;
        n--;
    }
    cout << "Fatorial: " << resp << endl;


    return 0;
}
