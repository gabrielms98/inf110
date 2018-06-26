#include <iostream>
using namespace std;
int main() {
    int chapa1 = 0;
    int chapa2 = 0;
    int chapa3 = 0;
    int voto;
    int nvotos = 0;
    int nulos = 0;
    int brancos = 0;
    cin >> voto;
    while(nvotos <= 20000){
        if(voto == 1)
            chapa1++;
        else if(voto == 2)
            chapa2++;
        else if(voto == 3)
            chapa3++;
        else if(voto > 3)
            nulos++;
        else if(voto == 0)
            brancos++;
        else if(voto == -1) break;
        nvotos++;
        cin >> voto;
    }
    cout << "Votos chapa 1: " << chapa1 << endl;
    cout << "Votos chapa 2: " << chapa2 << endl;
    cout << "Votos chapa 3: " << chapa3 << endl;
    cout << "Votos brancos: " << brancos << endl;
    cout << "Votos nulos  : " << nulos << endl;

    if(chapa1 > chapa2 && chapa1 > chapa3)
        cout << "==Vitoria chapa 1==" << endl;
    else if(chapa2 > chapa1 && chapa2 > chapa3)
        cout << "==Vitoria chapa 2==" << endl;
    else if(chapa3 > chapa1 && chapa3 > chapa2)
        cout << "==Vitoria chapa 3==" << endl;
    else cout << "==Empate==" << endl;

     return 0;
}
