/*Entra "n" e desenha dois triangulos retangulos de base n e altura n com o caracter "x".
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int j=0; j<=n; j++){
        for(int i=0; i<j; i++)
            cout << "x";
        cout << endl;
    }

    cout << endl;

    for(int j=0; j<n; j++){
        for(int i=0; i<n-j; i++)
            cout << "x";
        cout << endl;
    }

    return 0;
}
