#include <stdio.h>
#include <stdlib.h>

int main() {
	char text[250];
	int uzunluk;
	
	printf("Kelime ya da cümle girin:");
	gets(text);
	
	uzunluk=strlen(text);
	printf("Girdiðiniz kelime ya da cümlenin uzunlugu :%d",uzunluk);
	return 0;
}
