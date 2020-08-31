#include<stdio.h>
void print(int p, int c, int ca, char name[], int rollno, int totalmarks, float percentage);
int main(){
	char name[100]="James";
	int rollno, p, c, ca, i, totalmarks, percentage;
	printf("Input the Roll no Student : ");
	scanf("%d", &rollno);
	printf("Input the marks of physics : ");
	scanf("%d", &p);
	printf("Input the marks of Chemistry :");
	scanf("%d", &c);
	printf("Input the marks of Computer Application : ");
	scanf("%d", &ca);
	totalmarks= p+c+ca;
	percentage=totalmarks/3;
	print(p, c, ca, name, rollno, totalmarks, percentage);
	return 0;
}
void print(int p, int c, int ca, char name[], int rollno, int totalmarks, float percentage){
	int i;
	printf("Roll no : %d\n", rollno);
	printf("Name of the Student : %s", name);
	printf("Marks in Physics : %d\n", p);
	printf("Marks in Chemistry : %d\n", c);
	printf("Marks in Computer Application : %d\n", ca);
	printf("Total Marks are : %d\n", totalmarks);
	printf("Percentile is : %2.2f", percentage);
}
