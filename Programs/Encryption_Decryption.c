#include<stdio.h>

char * encrypt(char *en){

	char *ptr = en;
	char *temp = ptr;
	
	while(*ptr != '\0'){
		*ptr = *ptr+1;
		 ptr++;
	}
	
	return temp;
	
}

char * decrypt(char *de){
	char *ptr = de;
	char *temp = ptr;
	
	while(*ptr != '\0'){
		*ptr = *ptr-1;
		 ptr++;
	}
	
	return temp;
}

int main(){
	char msg[]="I love you ! Rishabh";
	char *encrypted = encrypt(msg);
	printf("Encrypted message: %s\n",encrypted);
	
	char *decrypted = decrypt(encrypted);
	printf("decrypted message: %s",decrypted);
	
	return 0;
}
