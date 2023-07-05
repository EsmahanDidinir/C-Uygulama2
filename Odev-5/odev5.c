#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char dizi[100];
	
	FILE * dosyaYaz = fopen("ornek.txt","w");
	
	printf("Dosya Olusturuldu.");
	printf("Veri giriþ yapýnýz:");
	gets(dizi);
	
	fprintf(dosyaYaz,dizi);
	printf("Veri girisi gerceklestirildi");
	fclose(dosyaYaz);
	
	FILE * dosyaOku=fopen("ornek.txt","r");
	while(!feof(dosyaOku))
	{
		fputchar(fgetc(dosyaOku));
	}
	printf("Okuma iþlemi tamamlandý.");



	return 0;
}
