//Brincadeira do PIM. (Multiplo de 4 no pode falar)
//Usuario escolhe o numero de vezes que PIM vaia aparecer no programa.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
    int m; //m é o numero de vezes que PIM vai aparecer
    cin >> m;
    int c = 1;
    while(m > 0){
        if(c % 4 == 0){
            cout << "PIM" << endl;
            m--;
        } else cout << c << endl;
        c++;
    }

    return 0;
}
