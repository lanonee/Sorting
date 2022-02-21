//BUBBLE SORT
#include <stdio.h>
void bubbleSort(int array[], int size) {
	int step,i;
  for (step = 0; step < size - 1; ++step) {
    for (i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
void printArray(int array[], int size) {
	int i;
  for (i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[8],i,n=8;
	printf("masukkan 8 angka dalam data : ");
	for(i=0;i<n;i++){
		scanf("%d",&data[i]);
	}
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  printf ("Data setelah disusun dari kecil ke besar (Ascending): \n");
  printArray(data, size);
}
