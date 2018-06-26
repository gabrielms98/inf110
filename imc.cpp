#include <iostream>
using namespace std;
int main () {

    float altura, peso;
    cout << "Digite altura (m) e peso (Kg): ";
    cin >> altura >> peso;
    float imc = peso / (altura*altura);
    cout << "imc= " << imc << endl;

    return 0;
}
