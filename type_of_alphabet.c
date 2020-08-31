#include<stdio.h>
int main(){
	char alphabet, i;
	char vovel[5]={'a', 'e', 'i', 'o', 'u'};
	printf("Enter the Alphabet :");
	scanf("%c", &alphabet);
	for(i=0; i<5; i++){
		if(alphabet==vovel[i]){
			printf("The alphabet is Vovel");
			break;
		}
		else{
			printf("The Alphabet is Consonant");
			break;
		}
	}
	return 0;
}
