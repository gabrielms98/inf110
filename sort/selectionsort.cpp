void SelectionSort(int *v, int n) {
 for (int i=0; i<n-1; i++) {
 // acha a posicao do menor elemento
 // entre as posi��es (i) e (n-1)
 int posMenor = i;
 for (int j=i+1; j<n; j++)
 if (v[j] < v[posMenor])
 posMenor = j;

 // troca o menor elemento (que est� na
 // posicao posMenor) com o elemento (i)
 int aux = v[i];
 v[i] = v[posMenor];
 v[posMenor] = aux;
 }
}
