#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int hamming(long x){
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    return hamming(x%10)+hamming(x/10);
}

int main(){
    int x;

    cin >> x;

    cout << hamming(x) << endl;

    return 0;
}
