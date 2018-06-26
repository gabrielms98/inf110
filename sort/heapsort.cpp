/*
Rearranja o vetor v[1...m] de modo que
o subvetor cuja raiz eh p seja um heap.
Supõe que os filhos de p no vetor
já satisfaçam as condições de heap
*/
void peneira(int *v, int p, int m) {
int maiorFilho = 2*p;
while(maiorFilho <= m) {
//Se o heap tem outro filho (ou seja, se p
//nao for o "fim" do heap) e tal filho
//tem maior prioridade, escolhemos os outro
//como maior filho
if (maiorFilho < m && v[maiorFilho+1] > v[maiorFilho])
maiorFilho++;
//Ja temos um heap!
if (v[p] > v[maiorFilho])
return;
//Vamos trocar p por seu maior filho e continuar o algoritmo
swap(v[p],v[maiorFilho]);
p = maiorFilho;
maiorFilho *= 2;
}
}
