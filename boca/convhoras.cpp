#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void convhoras(int seg, int &hora, int &minuto, int &segundos){
    hora=seg/3600;
    seg=seg%3600;
    minuto=seg/60;
    seg=seg%60;
    segundos=seg;
}
int main(){
    int entrada;
    int hora, minuto, segundos;
    cin >> entrada;
    convhoras(entrada, hora, minuto, segundos);
    cout << hora/10 << hora%10 << ":" << minuto/10 << minuto%10 << ":" << segundos/10 << segundos%10 << endl;

    return 0;
}
