#include <iostream>
using namespace std;
int main() {
    int a, b;
    int x = 2;
    cin >> a >> b;
    while(1)
        if(x%a == 0 && x%b ==0){
            cout << x << endl;
            break;
        }
        else x++;
    return 0;
}
