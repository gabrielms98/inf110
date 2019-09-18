#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main(){
    long long x1,y1,x2,y2;

    cin >> x1 >> y1 >> x2 >> y2;

    if(x1==x2 && y1==y2)
        cout << fixed << setprecision(1) << 0.0 << endl;
     else if(y1==y2)
     {
        cout << fixed << setprecision(1) << abs(x1-x2) << endl;
     }
     else if(x1==x2)
     {
        cout << fixed << setprecision(1) << abs(y1-y2) << endl;
     }
     else if(abs(x1-x2)==abs(y1-y2))
     {
       cout << fixed << setprecision(1) << abs(y1-y2)*1.5 << endl;
     }
     else
    {
        float distancia;

         if(abs(x1-x2)<abs(y1-y2))
            cout << fixed << setprecision(1) << (abs(x1-x2)*1.5)+abs(abs(x1-x2)-abs(y1-y2)) << endl;
         else
            cout << fixed << setprecision(1) << (abs(y1-y2)*1.5)+abs(abs(x1-x2)-abs(y1-y2)) << endl;
    }

    return 0;
}
