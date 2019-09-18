#include <iostream>
using namespace std;
int main()
{
    int nf, ft, fp;

    cin >> nf >> ft >> fp;

    if(ft>15) cout << "Reprovado" << endl;
    else if(fp>7) cout << "Reprovado" << endl;
    else if(nf<40) cout << "Reprovado" << endl;
    else if(nf<60) cout << "Final" << endl;
    else cout << "Aprovado" << endl;


    return 0;
}
