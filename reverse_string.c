#include<stdio.h>
#include<string.h>
int main(){
	char string[100], size, i;
	printf("Enter the string : ");
	scanf("%s", string);
	size=strlen(string);
	for(i=size; i>=0; i--){
		printf("%c ", string[i]);
	}
	return 0;
}
