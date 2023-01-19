#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Enter the size: ");
	int size;
	scanf("%d", &size);
	int * arr1 = (int *) malloc(size * sizeof(int));
	int * arr2 = (int *) malloc(size * sizeof(int));
	printf("Array No. %d\n", 1);
	for (int j =0 ; j<size; j++){
		printf("Enter Element number %d: ", j+1);
		scanf("%d", arr1+j);
	}
	printf("Array No. %d\n", 2);
	for (int j =0 ; j<size; j++){
		printf("Enter Element number %d: ", j+1);
		scanf("%d", arr2+j);
	}
	int dp=0;
	for (int i =0; i<size;i++){
		dp += arr1[i] * arr2[i];
	}
	printf("Dot Product: %d\n", dp);
}