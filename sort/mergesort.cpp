/* Supondo que v[p...q-1] e v[q...r-1] estejam ordenados, intercala os elementos
do arranjo de modo que v[p...r-1] fique ordenado */
void merge(int *v, int p, int q, int r) {
int tam = r-p;
int *aux = new int[tam];
int i = p; //cursor 1
int j = q; //cursor 2
int k = 0; //cursor para aux
while( i< q && j<r) {
if (v[i] ≤ v[j])
aux[k++] = v[i++];
else
aux[k++] = v[j++];
}
while(i<q)
aux[k++] = v[i++];
while(j<r)
aux[k++] = v[j++];
for(k=0;k<tam;k++)
v[p+k] = aux[k];
delete []aux;
}

/*
Ordena o vetor v entre as posicoes p e r-1
*/
void mergeSort(int *v, int p, int r) {
//Se o vetor tiver 1 ou menos elementos então ele ja está ordenado
if (p<r-1) {
int meio = (p+r)/2;
mergeSort(v,p, meio);
mergeSort(v,meio,r);
merge(v,p,meio,r); //intercala
}
}
void mergeSort(int *v, int n) {
mergeSort(v,0,n);
}
