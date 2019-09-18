#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    float x, nota;
    float aprovado, reprovado, prova;
    cin >> x;
    nota = x + 0.5;
    if(nota > 100 || nota < 0){
        cout << "Nota invalida!" << endl;
        cout << "Verifique o valor e tente novamente!" << endl;
    }
    if(nota < 40 && nota > 0){
        cout << "Reprovado!" << endl;
    }
    if(nota >= 40 && nota < 60){
        cout << "Prova Final!" << endl;
    }
    if(nota >= 60 && nota <=100){
        cout << "Você foi aprovado!" << endl;
    }


    return 0;
}
