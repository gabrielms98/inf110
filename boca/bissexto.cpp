
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
bool bissexto(int &a){
    if(a%100==0 && a%400!=0)
        return false;
    else if(a%4==0)
        return true;
    else return false;
}
int main(){
    int a;
    while(1){
        cin >> a;
    if(a<0)
        break;
    if(bissexto(a))
        cout << "bissexto" << endl;
    else cout << "nao bissexto" << endl;
    }
    return 0;
}
