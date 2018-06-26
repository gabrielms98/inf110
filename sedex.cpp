#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
    int n;
    int a, l, p;
    cin >> n;
    cin >> a >> l >> p;
    if(n <= a && n <= l && n<= p)
        cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}
