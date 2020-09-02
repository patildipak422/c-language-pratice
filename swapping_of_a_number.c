#include<stdio.h>
void swap(int*, int*);
int main(){
	int num1=1, num2=2;
	printf("Before swapping num1 = %d and num2 = %d\n", num1, num2);
	swap(&num1, &num2);
	printf("After swapping num1 = %d and num2 = %d", num1, num2);
	return 0;
}
void swap(int *num1, int *num2){
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}
