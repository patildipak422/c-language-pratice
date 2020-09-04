#include<stdio.h>
main(){
	int a;
	printf("Enter the Age : ");
	scanf("%d", &a);
	if (a<18){
		printf("SORRY You are not elegible for casting Vote.");
	}
	else if (a=18){
	
		printf("CONGRATULATIONS!! You are elegible for casting the Vote But 1st apply For the Voting card");
	}
	else if (a>18){
	
		printf("CONGRATULATIONS!! You are elegible for casting the Vote.");
	}
	return 0;
}
	
