#include <iostream>

using namespace std;

int main(){
    int m, n;
    int usuarios[100][100];
    int u[100];
    int iguais[100]={0};
    int aux, linha;
    bool primeiro=true;

    cin >> m >> n;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin >> usuarios[i][j];
    for(int i=0; i<n; i++)
        cin >> u[i];

    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            if(usuarios[i][j]==u[j])
                iguais[i]++;

    aux=iguais[0];
    for(int i=1; i<m; i++)
        if(iguais[i]>aux){
            aux=iguais[i];
            linha=i+1;
            primeiro=false;
        }

    if(primeiro)
        cout << "Linha 1" << endl;
    else cout << "Linha " << linha << endl;

    return 0;
}
