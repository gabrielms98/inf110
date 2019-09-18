/*Entrada m, . Imprime um retangulo MxN com caracteres "x".
*/

#include <iostream>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++)
            cout << "x";
        cout << endl;
    }
    return 0;
}
