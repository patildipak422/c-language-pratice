#include<stdio.h>
int main(){
	int size, num, i;
	printf("Enter the Size :");
	scanf("%d", &size);
	printf("Enter the Number :");
	scanf("%d", &num);
	for(i=1; i<=size; i++){
		printf("The multiples of %d is : %d\n", num, num*i);
	}
	return 0;
}
