/*Entrada m, representando a altura de um triangulo isosceles e desenha esse triangulo
*/

#include <iostream>
using namespace std;
int main(){
    //sendo h b=2*h-1
    int h;
    cin >> h;

    for(int k=0, i=2*h-1; i>0; i-=2, k++){
        for(int j=0; j<k; j++)
            cout << " ";
        for(int j=0; j<i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
