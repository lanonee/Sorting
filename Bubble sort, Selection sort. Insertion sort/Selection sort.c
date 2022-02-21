//SELECTION SORT
#include <stdio.h>
void tukar (int *a, int *b)
{
	int sementara = *a;
	*a = *b;
	*b = sementara;
}
void selectionsort (int array[], int size){
	int i,step;
	for (step = 0; step < size-1; step++)
	{
		int min_idx = step;
		for (i = step+1; i < size; i++)
		{
			if (array[i] < array[min_idx])
			min_idx = i;
		}
		tukar (&array[min_idx], &array[step]);
	}
}
void cetak(int array[], int size){
	int i;
	for (i = 0; i < size; i++)
	{
		printf ("%d ",array[i]);
	}
	printf ("\n");
}
int main () {
	int data[8],i,n=8;
	printf("masukkan 8 angka dalam data : ");
	for(i=0;i<n;i++){
		scanf("%d",&data[i]);
	}
	int size = sizeof(data)/sizeof(data[0]);
	selectionsort (data, size);
	printf ("Data setelah disusun dari kecil ke besar (Ascending): \n");
	cetak(data, size);
}

