#include<stdio.h>
int main(){
	int num1, num2, i, j, temp1, temp2, hcf, index1=0, index2=0, factors1[100], factors2[100];
	printf("Enter the 1st Number : ");
	scanf("%d", &num1);
	printf("Enter the 2nd Number : ");
	scanf("%d", &num2);
	temp1=num1, temp2=num2;
	for(i=2; i<=num1; i++){
		if(num1%i==0){
			temp1=temp1/i;
			factors1[index1]=i;
			index1++;
		}
	}
	printf("The Factors of %d are : ", num1);
	for(i=0; i<index1; i++){
		printf("%d ", factors1[i]);
	}
	for(i=2; i<=num2; i++){
		if(num2%i==0){
			temp2=temp2/i;
			factors2[index2]=i;
			index2++;
		}
	}
	printf("\nThe Factors of %d are : ", num2);
	for(i=0; i<index2; i++){
		printf("%d ", factors2[i]);
	}
	for(i=0; i<index1; i++){
		for(j=0; j<index2; j++){
			if(factors1[i]==factors2[j]){
				hcf=factors1[i];
			}
		}
	}
	printf("\nThe HCF of %d & %d is : %d", num1, num2, hcf);
	return 0;
}
