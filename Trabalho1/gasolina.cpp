#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int tempogasto, velocidade, consumo;
    float gasolina;
    float distancia;

    cin >> tempogasto >> velocidade >> consumo;

    distancia = velocidade*tempogasto;
    gasolina = distancia/consumo;

    cout << fixed << setprecision(3) << gasolina << endl;

    return 0;
}
