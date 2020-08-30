#include<stdio.h>
int main(){
	int num1;
	printf("enter the number"); 
 	scanf("%d", &num1);
 	if (num1 % 4 ==0){
 		printf("number is divisible by 4");
	}
 	else{
	 	printf("number is not divisible by 4");
 	}
}
