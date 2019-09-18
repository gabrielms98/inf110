#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int a, b;
    int x, m;
    int n[10];

    cin >> a >> b;

    for(int i=a; i<=b; i++){
        while(1){
            if(i<=0)
                break;
            if(i%10==0)
                n[0]++;
            if(i%10==1)
                n[1]++;
            if(i%10==2)
                n[2]++;
            if(i%10==3)
                n[3]++;
            if(i%10==4)
                n[4]++;
            if(i%10==5)
                n[5]++;
            if(i%10==6)
                n[6]++;
            if(i%10==7)
                n[7]++;
            if(i%10==8)
                n[8]++;
            if(i%10==9)
                n[9]++;
            i/=10;
        }
    }

    for(int i=0; i<11; i++)
        cout << n[i] << " ";
    cout << endl;


    return 0;
}
