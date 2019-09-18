#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    char letra;
    char anterior;
    long long int contador=1;

    cin >> letra;
    anterior=letra;

    while(1){
        cin >> letra;
        if(letra==anterior)
            contador++;
        if(letra!=anterior){
            cout << contador << anterior;
            anterior=letra;
            contador=1;
        }
        if(letra=='.'){
            cout << "0" << endl;
            break;
        }
    }


    return 0;
}
