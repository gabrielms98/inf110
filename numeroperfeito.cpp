#include <iostream>
using namespace std;

bool perfeito(int n){
    int j=0;
    for(int i=1; i<n; i++){
        if(n%i==0)
        j+=i;
    }
    if(j==n)
        return true;
    else return false;
}

int main(){
    int n;
    cin >> n;
    if(perfeito(n))
        cout << "sim" << endl;
    else cout << "nao" << endl;



    return 0;
}
