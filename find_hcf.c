#include<stdio.h>
int factor(int num1, int *index);
int main(){
	int i, index=0, num1, num2, *ptr;
	printf("Enter the First number : ");
	scanf("%d", &num1);
	printf("Enter the Second number : ");
	scanf("%d", &num2);
	ptr=factor(num1, &index);
	for(i=0; i<index; i++){
		printf("%d ", *(ptr+i));
	}
}
int factor(int num1, int *index){
	int temp=num1, *x, i, factors[100];
	for(i=2; i<num1; i++){
		if(num1%i==0){
			temp=temp/i;
			factors[*x]=i;
			x=x+1;
		}
	}
//		for(i=0; i<index; i++){
//		printf("%d ", factors[i]);
//	}
	return factors;
}
