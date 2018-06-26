#include <iostream>
using namespace std;

int main(){
    int inicial, taxa;
    int horas=0;

    cin >> inicial >> taxa;

    for(int atual=inicial; atual<1000000000; atual=atual+(taxa*atual))
        horas++;


    cout << horas << endl;

    return 0;
}
