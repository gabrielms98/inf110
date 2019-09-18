#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double batata=4.30, suco=2.70, guarana=1.43;
    char lista;
    double valor=0;
    double preco;
    double v;
    char t;

    cin >> lista;
    if(lista=='1')
        preco=batata;
    else if(lista=='2')
        preco=suco;
    else if(lista=='3')
        preco=guarana;

    while(1){
        cin >> t >> v;
        if(t=='M')
            v=v/100;
        valor+=v;
        if(v==0)
            break;
    }

    if(lista!='1' && lista!='2' && lista!='3')
        cout << "Produto inexistente." << endl;
    else if(valor<preco)
        cout << "Saldo insuficiente." << endl;
    else cout << "Troco de " << (valor-preco)*100 << " centavos." << endl;


    return 0;
}
