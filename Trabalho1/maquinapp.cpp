#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double batata=430, suco=270, guarana=143;
    char lista;
    double valor=0;
    double preco;
    double v;
    char t;
    int c1=10000, c2=5000, c3=2000, c4=1000, c5=500, c6=200;
    int m1=100, m2=50, m3=25, m4=10, m5=5, m6=1;

    cin >> lista;
    if(lista=='1')
        preco=batata;
    else if(lista=='2')
        preco=suco;
    else if(lista=='3')
        preco=guarana;

    while(1){
        cin >> t >> v;
        if(t=='C')
            v=v*100;
        valor+=v;
        if(v==0)
            break;
    }
    if(lista!='1' && lista!='2' && lista!='3'){
        cout << "Produto inexistente." << endl;
        return 0;
    }
    else if(valor<preco){
        cout << "Saldo insuficiente." << endl;
        return 0;
    }


    int troco=valor-preco;
    while(1){
        if(valor>=preco){
            if(c1<=troco){
                cout << "C" << " " << c1/100 << endl;
                troco-=c1;
            }
            else if(c2<=troco){
                cout << "C" << " " << c2/100 << endl;
                troco-=c2;
            }
            else if(c3<=troco){
                cout << "C" << " " << c3/100 << endl;
                troco-=c3;
            }
            else if(c4<=troco){
                cout << "C" << " " << c4/100 << endl;
                troco-=c4;
            }
            else if(c5<=troco){
                cout << "C" << " " << c5/100 << endl;
                troco-=c5;
            }
            else if(c6<=troco){
                cout << "C" << " " << c6/100 << endl;
                troco-=c6;
            }
            else if(m1<=troco){
                cout << "M" << " " << m1 << endl;
                troco-=m1;
            }
            else if(m2<=troco){
                cout << "M" << " " << m2 << endl;
                troco-=m2;
            }
            else if(m3<=troco){
                cout << "M" << " " << m3 << endl;
                troco-=m3;
            }
            else if(m4<=troco){
                cout << "M" << " " << m4 << endl;
                troco-=m4;
            }
            else if(m5<=troco){
                cout << "M" << " " << m5 << endl;
                troco-=m5;
            }
            else if(m6<=troco){
                cout << "M" << " " << m6 << endl;
                troco-=m6;
            }
            else if(troco==0)
                break;
        }
    }
    return 0;
}
