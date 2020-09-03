#include<stdio.h>
int main(){
	int num1, *ptrnum1=&num1;
	int num2, *ptrnum2=&num2;;
	printf("Enter the First Number : ");
	scanf("%d", &num1);
	printf("Enter the second Number : ");
	scanf("%d", &num2);
	printf("The sum is %d\n", *(ptrnum1)+*(ptrnum2));
	return 0;
}
