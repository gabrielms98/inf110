#include <iostream>
using namespace std;
int main(){
    int n;
    long long resp = 1;
    cin >> n;
    while(n > 0){
        resp *= n;
        n--;
    }

    cout << resp << endl;

    return 0;
}
