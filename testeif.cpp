#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
    int a, b;
    cin >> a >> b;
    if(a%b == 0){
        cout << "Divisão inteira!" << endl;
        int c = a/b;
        cout << "Resultado igual " << c << endl;
    }

    return 0;
}
