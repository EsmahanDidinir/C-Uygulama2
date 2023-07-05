#include <stdio.h>
#include <stdlib.h>


int main() {
	int x,y;
	int *p1,*p2;
	
	x=5;
	y=7;
	
	p1=&x;
	p2=&y;
	
	printf("%d,%d",*p1,*p2);
	 
	 
	return 0;
}
