#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Retorna o valor de x!
long long int fatorial (int x){
    long long int fat=1;
    for(int i=2; i<=x; i++)
        fat*=i;
    return fat;
}
int main(){
    int n, k;
    int ncomissoes;
    cin >> n >> k;

    ncomissoes = (fatorial(n))/(fatorial(k)*fatorial(n-k));

    cout << ncomissoes << endl;




    return 0;
}
