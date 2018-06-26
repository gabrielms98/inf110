//Solucionar uma equação do 2o grau tendo os valores de a, b, c.

#include <iostream>
#include <cmath>
using namespace std;
int main (){

    float a, b, c;
    cin >> a >> b >> c;
    float delta = pow(b,2) - 4*a*c;
    float x1 = (-b + sqrt(delta)/(2*a));
    float x2 = (-b - sqrt(delta)/(2*a));
    cout << x1 << " " << x2 << endl;

    return 0;
}
