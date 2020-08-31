#include<stdio.h>
int main(){
	int temp;
	printf("Enter the Temperature :");
	scanf("%d", &temp);
	if(temp<0)
		printf("Freezing Weather\n");
	else if(temp>=40)
			printf("Its Very Hot\n");
		else if(temp<40 && temp>=30)
				printf("Its Hot\n");
			else if(temp<30 && temp>=20)
					printf("Normal in Temperatur\n");
				else if(temp<20 && temp>=10)
						printf("Very Cold Weather\n");
	return 0;
}
