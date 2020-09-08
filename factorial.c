#include<Stdio.h>
int main(){
	int num, i;
	long double factorial=1;
	printf("Enter the Number : ");
	scanf("%d", &num);
	for(i=num; i>00; i--){
		factorial=factorial*i;
	}
	printf("The Factorial of %d is %d ", num, factorial);
	return 0;
}
