#include<Stdio.h>
void factorialcal(int *num, int *factorial);
int main(){
	int num, i, factorial=1;
	printf("Enter the Number : ");
	scanf("%d", &num);
	factorialcal(&num, &factorial);
	printf("The Factorial of %d is %d ", num, factorial);
	return 0;
}
void factorialcal(int *num, int *factorial){
	int i;
	for(i=*num; i>0; i--){
		*factorial=*factorial * i;
	}
}
