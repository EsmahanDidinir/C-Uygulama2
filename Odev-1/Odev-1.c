#include <stdio.h>
#include <stdlib.h>

int main() {
	char text[250];
	int uzunluk;
	
	printf("Kelime ya da c�mle girin:");
	gets(text);
	
	uzunluk=strlen(text);
	printf("Girdi�iniz kelime ya da c�mlenin uzunlugu :%d",uzunluk);
	return 0;
}
