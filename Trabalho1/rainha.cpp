#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    //Algebricamente e provado que no maximo ocorrem 2 movimentos
    if(x1==x2 && y1==y2)
        cout << "0" << endl;
    //Estando na mesma linha ou coluna, apenas 1 movimento.
    else if(x1==x2 || y1==y2)
        cout << "1" << endl;
    //Estando em lugarem diferentes, sao 2 movimentos necessarios.
    else if(abs(x2-x1)==abs(y2-y1))
        cout << "1" << endl;
    else cout << "2" << endl;


    return 0;
}
