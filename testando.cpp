#include <iostream>

using namespace std;

void somar(float &var, float valor);

int main(){

    float num=0;

    somar(num, 15);

    cout << num << endl;

    return 0;
}

void somar(float &var, float valor){
    var+=valor;
}
