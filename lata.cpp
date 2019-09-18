#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
    double r, a;
    double pi = 3.1415;
    cin >> r >> a;
    double v = (pi*(r*r))*(a);
    cout << fixed << setprecision(2) << v << endl;

    return 0;
}
