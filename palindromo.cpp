#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    m=log10(n);

    bool palin=true;

    for(int i=0, j=m; i<j; i++, j--){
        int d1= (n/(int)pow(10,i))%10;
        int d2= (n/(int)pow(10,j))%10;
        if(d1!=d2){
            palin=false;
            break;
        }
    }

    if(palin) cout << "Palindromo" << endl;
    else cout << "Nao Palindromo" << endl;

    return 0;
}
