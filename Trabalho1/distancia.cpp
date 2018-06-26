#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int x1, y1, x2, y2;
    double distancia;
    cin >> x1 >> y1 >> x2 >> y2;

    /*Se as coordenadas forem iguais, ele ja esta no lugar. Distancia = 0.
    */
    if(x1==x2 && y1==y2)
        cout << fixed << setprecision(1) << "0.0" << endl;

    /*Se ele estiver na mesma linha ou coluna a distancia é a soma das diferencas,
    pois uma delas é igual a 0.
    */
    else if(x1==x2 || y1==y2){
        distancia = abs(x2-x1) + abs(y2-y1);
        cout << fixed << setprecision(1) << distancia << endl;
    }
    /*Se formar um quadrado, a menor distancia é a diagonal.
    */
    else if(abs(x1-x2)==abs(y1-y2)){
        distancia = abs(y1-y2)*1.5;
        cout << fixed << setprecision(1) << distancia << endl;
    }

    /*Sendo as coordenadas ambas diferentes em linha e coluna.
    Primeiro descobrimos qual distancia é maior (linha ou coluna),
    assim ele andará em linha reta até que a distancia restante seja igual a
    menor distancia (coluna ou linha). Quando formar um "quadrado" a menor distancia é em diagonal.
    */
    else{
        if(abs(x2-x1) > abs(y2-y1)){
            distancia = abs(abs(x2-x1) - abs(y2-y1))*1 + (abs(y2-y1))*1.5;
            cout << fixed << setprecision(1) << distancia << endl;
        }
        else{
            distancia = abs(abs(y2-y1) - abs(x2-x1))*1 + (abs(x2-x1))*1.5;
            cout << fixed << setprecision(1) << distancia << endl;
        }
    }
    return 0;
}
