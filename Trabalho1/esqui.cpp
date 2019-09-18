#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
    double maior1, maior2, maior3, maior4, menor1, menor2, menor3, menor4;
    double maior(double j1, double j2, double j3, double j4, double j5){
        maior2 = (j1+j2+abs(j1-j2))/2;
        maior3 = (maior2+j3+abs(maior2-j3))/2;
        maior4 = (maior3+j4+abs(maior3-j4))/2;
        maior1 = (maior4+j5+abs(maior4-j5))/2;
        return maior1;
    }
    double menor(double j1, double j2, double j3, double j4, double j5){
        menor2 = (j1+j2-abs(j1-j2))/2;
        menor3 = (menor2+j3-abs(menor2-j3))/2;
        menor4 = (menor3+j4-abs(menor3-j4))/2;
        menor1 = (menor4+j5-abs(menor4-j5))/2;
        return menor1;
    }
int main(){
    double d;
    double j1, j2, j3, j4, j5;
    double notafinal;
    cin >> d;
    cin >> j1 >> j2 >> j3 >> j4 >> j5;
    double notajuizes = j1+j2+j3+j4+j5;
    if(d<120){
        notajuizes = notajuizes - menor(j1, j2, j3, j4, j5) - maior(j1, j2, j3, j4, j5);
        notafinal = (60 - (120-d)*1.8) + notajuizes;
        cout << fixed << setprecision(1) << notafinal << endl;
     }
     if(d>=120){
        notajuizes = notajuizes - menor(j1, j2, j3, j4, j5) - maior(j1, j2, j3, j4, j5);
        notafinal = (60 + (d-120)*1.8) + notajuizes;
        cout << fixed << setprecision(1) << notafinal << endl;
     }



    return 0;
}
