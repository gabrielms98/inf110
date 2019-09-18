#include <iostream>
using namespace std;
int main(){
    int n, c;                       //numero de entradas e capacidade
    cin >> n >> c;
    int s, e;                       //pessoa saindo e pessoa entrando
    int q = 0;                      //qnt atual de pessoas
    bool excedeu = false;
    while(n > 0){
        cin >> s >> e;
        q = q - s + e;
        n--;
       if(q > c)
            excedeu = true;
    }
    if(excedeu)
        cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}
