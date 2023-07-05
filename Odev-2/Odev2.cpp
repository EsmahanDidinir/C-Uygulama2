#include <iostream>
 
 int faktoriyel(int sayi){
 	
 	if(sayi==1 ||  sayi== 0)
 		return 1;
 	else
 		return sayi*faktoriyel(sayi-1);
	 
 	
 }

int main() {
	int sayi;
	printf("Sayi girin:");
	scanf("%d",&sayi);
	
	printf("%d!=%d",sayi,faktoriyel(sayi));
	
	return 0;
}
