#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    if(x%y == 0){
        cout << "A divisao de " << x << " por " << y << " e exata." << endl;
        int c = x/y;
        if(c < 10){
            cout << c << endl;
        }
    }

    return 0;
}
