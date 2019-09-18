void insertionSort(int *v, int n) {
 for (int i=1; i<n; i++) {
 // o arranjo entre as posicoes [0,i) já está ordenado
 int elemInserir = v[i];
 int j = i-1;
 while( j>=0 && v[j] > elemInserir) {
v[j+1] = v[j];
j--;
 }
 v[j+1] = elemInserir;
 }
}
