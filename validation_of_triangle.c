#include<stdio.h>
int main(){
	int angle1, angle2, angle3, sum;
	printf("Enter the first angle :");
	scanf("%d", &angle1);
	printf("Enter the second angle :");
	scanf("%d", &angle2);
	printf("Enter the third angle :");
	scanf("%d", &angle3);
	sum=angle1+angle2+angle3;
	if(sum==180){
		if(angle1!=180){
			if(angle2!=180){
				if(angle3!=180){
					printf("The Triangle is Valid\n");
				}
				else{
					printf("The Triangle is Not Valid\n");
				}
			}
			else{
				printf("The Triangle is Not Valid\n");
			}
		}
		else{
			printf("The Triangle is Not Valid\n");
		}		
	}
	else{
		printf("The Triangle is Not Valid\n");
	}
	return 0;
}
