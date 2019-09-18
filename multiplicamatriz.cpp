#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int a[100][100], b[100][100], c[100][100];
    int m, n, z, p;

    cin >> m >> n >> z >> p;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin >> a[i][j];
    for(int i=0; i<z; i++)
        for(int j=0; j<p; j++)
            cin >> b[i][j];

    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            int v=0;
            for(int k=0; k<n; k++)
                v+=a[i][k]*b[k][j];
            c[i][j]=v;
        }
    }
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cout << c[i][j] << " ";
        cout << endl;


    return 0;
}
