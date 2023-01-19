#include <stdio.h>
#define COUNT 10

void fun1(int * a){
	for (int i=0; i<COUNT/2;i++){
		int temp = *(a+9-i);
		*(a+9-i) = *(a+i);
		*(a+i) =  (temp);
	}
}

int main(){
	int a[COUNT];
	for (int i=0; i<COUNT;i++){
		printf("Enter Element number %d out of 10: ", i+1);
		scanf("%d", a+i);
	}
	fun1(a);
	
	printf("\n");
	for (int i=0; i<COUNT;i++){
		printf("Element number %d out of 10: %d\n", i+1,*(a+i));
	}
}