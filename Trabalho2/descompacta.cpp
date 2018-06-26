#include <iostream>
using namespace std;
int main(){
    char letra;
    long long int contador;


    while(1){
        cin >> contador >> letra;
        for(int x=1; x<=contador; x++){
            cout << letra;
        }
        if(letra=='0')
            cout << "." << endl;
            break;
    }


    return 0;
}
