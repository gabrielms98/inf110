#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
    double a, b, c;
    cin >> a >> b >> c;
    double delta = pow(b,2) - 4*a*c;
    double x1 = (-b - sqrt(delta))/(2*a);
    double x2 = (-b + sqrt(delta))/(2*a);
    if(x1 == x2)
        cout << fixed << setprecision(2) << x1 << endl;
    else if(delta < 0)
        cout << "Nao ha raiz real" << endl;
    else if(x1 != x2)
        cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
    return 0;
}
