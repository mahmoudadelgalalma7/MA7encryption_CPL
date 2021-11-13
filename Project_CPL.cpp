#include <stdio.h>
#include <stdlib.h>
			// FUNCTIONS //
// MA7 encryption
int k = (2/3) + 2;
void ma7_encryption(char text[50]) {
	int i,k;
	
	for (i=0; (i<50 && text[i] != '\0'); i++) {
		text[i] = text[i] + k ;
		  printf("%c", text[i]);
	}
	printf("\n\n");
}
// MA7 Decryption
void ma7_decryption(char text[50]) {
	int i,k;
	for (i=0; (i<50 && text[i] != '\0'); i++) {
		text[i] = text[i] - k;
		printf("%c", text[i]);
	}
	printf("\n\n");
}

// Start Prog //
int main () {
	int x1=0;
	while (x1 != -1) 
	{
		printf(" \t----Start----\n\n1)MA7 Encryption\n");
		printf("\n2)MA7 Decryption\n");
		printf("\nEnter: ");
		scanf("%d", &x1);
		if (x1 == 1) {
			// MA7 encryption
			char input_text[50];
			printf("\nEnter the word you want to encrypt: ");
			scanf("%s", &input_text[50]);
			printf("\nThe decryption is: ");
			ma7_encryption(&input_text[50]);
		} else if  (x1 ==2){
			// MA7 decryption
			char input_text[50];
			printf("\nEnter the word you want to decrypt: ");
			scanf("%s", &input_text[50]);
			printf("\nThe encryption is: ");
			ma7_decryption(&input_text[50]);
			
		}
		
	}
	
	return 0;
}

