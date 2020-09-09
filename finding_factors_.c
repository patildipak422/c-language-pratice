#include<stdio.h>
int main(){
	int i, num1, num2, factors[100], index=0;
	printf("Enter the number : ");
	scanf("%d", &num1);
	int temp=num1;
	for(i=2; i<num1; i++){
		if(num1%i==0){
			temp=temp/i;
			factors[index]=i;
			index++;
		}
	}
	printf("The Factors of %d are : ", num1);
	for(i=0; i<index; i++){
		printf("%d ", factors[i]);
	}
	return 0;
}
