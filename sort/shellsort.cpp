void shellSort(int *v, int n) {
int h=1;
while (h < n) h = 3*h + 1;
do {
h = h/3;
for (int i=h; i < n; i++) {
int elemInserir = v[i];
int j = i-h;
while( j>=0 && v[j] > elemInserir) {
v[j+h] = v[j];
j -= h;
}
v[j+h] = elemInserir;
}
} while (h > 1);
}
