#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

long long int fatorial(int m){
    long long int resp=1;
    while(m>0){
        resp*=m;
        m--;
    }
    return resp;
}

double euler(int m){
    double n=0, resp2=0;
    while(n<=m-1){
        resp2+=(double)1/fatorial(n);
        n++;
    }
    return resp2;
}

int main() {
    double m;
    cin >> m;
    fatorial(m);

    cout << fixed << setprecision(4) << euler(m) << endl;

    return 0;
}
