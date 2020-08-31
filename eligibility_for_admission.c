#include<stdio.h>
int main(){
	int maths, physics, chemistry, totalmarks, mathphysics;
	printf("Enter the Math Marks :");
	scanf("%d", &maths);
	printf("Enter the Physics Marks :");
	scanf("%d", &physics);
	printf("Enter the Chemistry Marks :");
	scanf("%d", &chemistry);
	mathphysics= maths+physics;
	totalmarks=maths+physics+chemistry;
	if(maths>=65){
		if(physics>=55){
			if(chemistry>=50){
				if(totalmarks>=180||mathphysics>=140){
					printf("Congratulation !! You are Eligible for Admission");
				}
				else{
					printf("Sorry You are not eligible for Admissiom");
				}
			}
			else{
				printf("Sorry You are not eligible for Admissiom");
			}
		}
		else{
			printf("Sorry You are not eligible for Admissiom");
		}
	}
	else{
		printf("Sorry You are not eligible for Admissiom");
	}
	return 0;
}
