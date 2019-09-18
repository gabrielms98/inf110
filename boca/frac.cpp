#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int mdc(int a, int b){
    for(int i=a; i>=1; i--){
        if(a%i==0 && b%i==0)
            return i;
    }
}
void somafrac(int na, int da, int nb, int db, int &nr, int &dr){
    dr = da*db;
    nr = (dr/da)*na + (dr/db)*nb;
}

int main(){
    int a, b, c, d, e=0, f=0;
    char barra;

    cin >> a >> barra >> b >> c >> barra >> d;

    somafrac(a, b, c, d, e, f);

    if(e%mdc(e, f)==0 && f%mdc(e, f)==0){
        e/=mdc(e, f);
        f/=mdc(e, f);
    }
    //cout << mdc(e, f) <<  endl;
    cout << a << "/" << b << "+" << c << "/" << d << "=" << e << "/" << f << endl;

    return 0;
}
