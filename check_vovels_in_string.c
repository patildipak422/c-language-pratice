#include<stdio.h>
#include<string.h>
int main(){
	int ctr=0, ctr1=0, i, j;
	char string[100], vovels[100]= {'a', 'e', 'i', 'o', 'u'}, consonant[100]={'b','c','c','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
	printf("Enter the String : ");
	scanf("%s", &string);
	printf("%s", string);
	for(i=0; i<strlen(string); i++){
		for(j=0; j<26; j++){
			if(string[i]==vovels[j]){
				ctr+=1;
			}
			else if(string[i]==consonant[j]){
				ctr1+=1;
			}
		}
		
	}
	printf("\nTotal number of Vovels : %d\n", ctr);
	printf("Total number of consonant : %d", ctr1);
	return 0;
}
