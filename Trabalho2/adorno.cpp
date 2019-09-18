#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int a, b;
    int n[10];
    int numero;

    cin >> a >> b;

    for(int i=0; i<10; i++)
        n[i]=0;

    for(int i=a; i<=b; i++)
        while(1){
            if(i<=0)
                break;
            numero=i%10;

            if(numero==0)
                n[0]++;
            else if(numero==1)
                n[1]++;
            else if(numero==2)
                n[2]++;
            else if(numero==3)
                n[3]++;
            else if(numero==4)
                n[4]++;
            else if(numero==5)
                n[5]++;
            else if(numero==6)
                n[6]++;
            else if(numero==7)
                n[7]++;
            else if(numero==8)
                n[8]++;
            else n[9]++;

            i/=10;
        }

    for(int i=0; i<10; i++)
        cout << n[i] << " ";
    cout << endl;

    return 0;
}
