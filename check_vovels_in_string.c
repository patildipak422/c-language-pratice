#include<stdio.h>
#include<string.h>
int main(){
	int ctr=0, i, j;
	char string[100], vovels[100]= {'a', 'e', 'i', 'o', 'u'};
	printf("Enter the String : ");
	scanf("%s", &string);
	printf("%s", string);
	for(i=0; i<strlen(string); i++){
		for(j=0; j<5; j++){
			if(string[i]==vovels[j]){
				ctr+=1;
			}
		}
	}
	printf("\nThere are total %d number of Vovel in sting", ctr);
	return 0;
}
