#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    int y = 0;
    int x = 1;
    cin >> n;
    while(y < n){
        if(n%x == 0)
            y += x;
        x++;
    }
    if(y == n)
        cout << "SIM" << endl;
    else cout << "NAO" << endl;

    return 0;
}
