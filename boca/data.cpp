#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
bool bissexto(int &a){
    if(a%100==0 && a%400!=0)
        return false;
    else if(a%4==0)
        return true;
    else return false;
}
bool validaData(int d, int m, int a){
    if(m<1)
        return false;
    if(m==1){
        if(d>=1 && d<=31)
            return true;
        else return false;
    }
    if(m==2){
        if(bissexto(a)){
            if(d>=1 && d<=29)
                return true;
            else return false;
        }
        else if(d>=1 && d<=28)
            return true;
        else return false;
    }
    if(m==3){
        if(d>=1 && d<=31)
            return true;
        else return false;
    }
    if(m==4){
        if(d>=1 && d<=30)
            return true;
        else return false;
   }
    if(m==5){
        if(d>=1 && d<=31)
            return true;
        else return false;
   }
    if(m==6){
        if(d>=1 && d<=30)
            return true;
        else return false;
   }
    if(m==7){
        if(d>=1 && d<=31)
            return true;
        else return false;
   }
    if(m==8){
        if(d>=1 && d<=31)
            return true;
        else return false;
   }
    if(m==9){
        if(d>=1 && d<=30)
            return true;
        else return false;
   }
    if(m==10){
        if(d>=1 && d<=31)
            return true;
        else return false;
   }
    if(m==11){
        if(d>=1 && d<=30)
            return true;
        else return false;
   }
    if(m==12){
        if(d>=1 && d<=31)
            return true;
        else return false;
   }
   if(m>12)
        return false;
}

int main(){
    int d, m, a;
    cin >> d >> m >> a;
    if(validaData(d, m, a))
        cout << "data valida" << endl;
    else cout << "data invalida" << endl;

    return 0;
}
