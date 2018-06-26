#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int gb;
    double custo=0;

    cin >> gb;

    if(gb>=0 && gb<=50)
        custo=0.75*gb+0.50;
    else if(gb>50 && gb<=100)
        custo=0.80*gb+1.00;
    else if(gb>100 && gb<=200)
        custo=gb*1.00+1.50;
    else if(gb>200)
        custo=1.20*gb+2.00;

    cout << fixed << setprecision(2) << custo << endl;


    return 0;
}
