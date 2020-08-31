#include<stdio.h>
void takingangles(int *angle1, int *angle2, int *angle3);
int main(){
	int angle1, angle2, angle3;
	takingangles(&angle1, &angle2, &angle3);
	
	if(angle1==angle2 && angle1==angle3){
			printf("The Triangle is an Equilateral Triangle");
	}
	else if(angle1==angle2 || angle2==angle3 || angle1==angle3){
		printf("The Triangle is an Isoceles Triangle");
	}
	else{
			printf("The Triangle is an Normal Triangle");
		}
	return 0;
}
void takingangles(int *angle1, int *angle2, int *angle3){
	printf("Enter the First Angle :");
	scanf("%d", &angle1);
	printf("Enter the Second Angle :");
	scanf("%d", &angle2);
	printf("Enter the Third Angle :");
	scanf("%d", &angle3);
}
