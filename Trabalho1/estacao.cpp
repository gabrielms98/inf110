#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int d, m;
    cin >> d >> m;
    if(m==1){
        cout << d << " " << "de janeiro" << endl;
        cout << "Verao" << endl;
    }
    if(m==2){
        cout << d << " " << "de fevereiro" << endl;
        cout << "Verao" << endl;
    }
    if(m==3 && d<20){
        cout << d << " " << "de marco" << endl;
        cout << "Verao" << endl;
    }
    if(m==3 && d>=20){
        cout << d << " " << "de marco" << endl;
        cout << "Outono" << endl;
    }
    if(m==4){
        cout << d << " " << "de abril" << endl;
        cout << "Outono" << endl;
    }
    if(m==5){
        cout << d << " " << "de maio" << endl;
        cout << "Outono" << endl;
    }
    if(m==6 && d<21){
        cout << d << " " << "de junho" << endl;
        cout << "Outono" << endl;
    }
    if(m==6 && d>=21){
        cout << d << " " << "de junho" << endl;
        cout << "Inverno" << endl;
    }
    if(m==7){
        cout << d << " " << "de julho" << endl;
        cout << "Inverno" << endl;
    }
    if(m==8){
        cout << d << " " << "de agosto" << endl;
        cout << "Inverno" << endl;
    }

    if(m==9 && d<22){
        cout << d << " " << "de setembro" << endl;
        cout << "Inverno" << endl;
    }
    if(m==9 && d>21){
        cout << d << " " << "de setembro" << endl;
        cout << "Primavera" << endl;
    }

    if(m==10){
        cout << d << " " << "de outubro" << endl;
        cout << "Primavera" << endl;
    }
    if(m==11){
        cout << d << " " << "de novembro" << endl;
        cout << "Primavera" << endl;
    }

    if(m==12 && d<21){
        cout << d << " " << "de dezembro" << endl;
        cout << "Primavera" << endl;
    }
    if(m==12 && d>=21){
        cout << d << " " << "de dezembro" << endl;
        cout << "Verao" << endl;
    }
    return 0;
}
