#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int d = 2;
    bool primo = true;
    while(d < n){
        if(n%d == 0){
            primo = false;
            break;
        }
        d++;
    }
    if(primo)
        cout << "Primo." << endl;
    else cout << "Nao primo." << endl;

    return 0;
}

