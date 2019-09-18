#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void troca(double &a, double &b);

void ordena(double v[], int n);

int main(){
    int n;
    double p[100];

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> p[i];

    ordena(p, n);

    double media=0.0;
    for(int i=2; i<n-2; i++)
        media+=p[i];
    media/=n-4;

    double desvio=0.0;
    for(int i=2; i<n-2; i++)
        desvio+=pow(p[i]-media,2);
    desvio/=n-4;
    desvio=sqrt(desvio);

    int contador=0;
    for(int i=2; i<n-2; i++)
        if(p[i]>media)
            contador++;

    cout << fixed << setprecision(2) << media << " " << desvio << " " << contador << endl;

    return 0;
}


void troca(double &a, double &b){
    double aux=a;
    a=b;
    b=aux;
}

void ordena(double v[], int n){
    bool trocou=true;
    while(trocou){
        trocou=false;
        for(int i=0; i<n-1; i++){
            if(v[i]>v[i+1]){
                troca(v[i], v[i+1]);
                trocou=true;
            }
        }
    }
}
