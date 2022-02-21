//INSERTION SORT
#include <stdio.h>
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
void insertionSort(int array[], int size) {
  int step;
  for (step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}
int main() {
  int data[8],i,n=8;
	printf("masukkan 8 angka dalam data : ");
	for(i=0;i<n;i++){
		scanf("%d",&data[i]);
	}
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  printf ("Data setelah disusun dari kecil ke besar (Ascending): \n");
  printArray(data, size);
}
    


