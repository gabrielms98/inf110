#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if((a >= b && b >= c && c >= d) || (a <= b && b <= c && c <= d))
        cout << "SIM" << endl;
    else cout << "NAO" << endl;
    return 0;
}
