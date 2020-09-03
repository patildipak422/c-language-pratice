#include<stdio.h>
int main(){
	int array[100], size, i;
	printf("Enter the Size");
	scanf("%d", &size);
	for(i=0; i<size; i++){
		printf("Enter the Element : ");
		scanf("%d", array+i);
	}
	printf("The elements in the array are :");
	for(i=0; i<size; i++){
		printf("%d", *(array+i));
	}
	return 0;
}
