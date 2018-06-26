#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;

    for(int x=n; x<=m; x++){
        if(x%n==0)
            cout << x << endl;
    }

    return 0;
}
