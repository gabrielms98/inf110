#include <iostream>

using namespace std;

int main(){

    bool vetor1[100];
    bool vetor2[100];
    int n, contador=0;

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> vetor1[i];
    for(int j=0; j<n; j++)
        cin >> vetor2[j];

    int *igual;
    igual=&vetor1;

    for(int i=0; i<n; i++){
        if(*igual==vetor2[i])
            contador++;

    }






    return 0;
}
