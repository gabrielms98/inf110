#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
    double t, c, f;
    char e;
    cin >> t >> e;
    if(e == 'C'){
        f = ((9.0/5)*t) + 32;
        cout << fixed << setprecision(1) << f << " F" << endl;
    }
    else if(e == 'F'){
        c = (5.0/9)*(t - 32);
        cout << fixed << setprecision(1) << c << " C" << endl;
    }

    return 0;
}
