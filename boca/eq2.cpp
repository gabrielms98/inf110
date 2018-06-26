#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int eq2grau(double a, double b, double c, double &x1, double &x2){
    double delta;
        delta = pow(b,2) - (4*a*c);
        if(delta<0)
            return 0;
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        if(x1==x2)
            return 1;
        if(x1!=x2)
            return 2;
}

int main(){
    double a, b, c;
    double x1=0, x2=0;
    cin >> a >> b >> c;

    if(eq2grau(a, b, c, x1, x2)==0)
        cout << "Nao ha raiz real" << endl;
    else if(eq2grau(a, b, c, x1, x2)==1)
        cout << fixed << setprecision(2) << x1 << endl;
    else if(eq2grau(a, b, c, x1, x2)==2)
        cout << fixed << setprecision(2) << x1 << " " << x2 << endl;

    return 0;
}
