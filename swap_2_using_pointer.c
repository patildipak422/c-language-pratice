#include<stdio.h>
void swap(int *testarray);
void swap(int *testarray){
	int temp;
	temp=testarray[0];
	testarray[0]=testarray[2];
	testarray[2]=temp;
}
int main(){
	int i, size, testarray[100];
	printf("Enter the size : ");
	scanf("%d", &size);
	for(i=0; i<size; i++){
		printf("Enter the number : ");
		scanf("%d", testarray+i);
	}
	printf("The numbers before swapping are : ");
	for(i=0; i<size; i++){
		printf("%d ", *(testarray+i));
	}
	swap(testarray);
	printf("\nThe numbers after swapping are : ");
	for(i=0; i<size; i++){
		printf("%d ", *(testarray+i));
	}
	return 0;
}
