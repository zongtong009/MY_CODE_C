#include <stdio.h>
#define m(x,y) x-y
/****************************************************************/
int main(void) {
	printf("\\  \n");
	printf("/   \n");
	int a=3,b=4,c=5;
	printf("%d",a*m(b,c));
	// =a*x-y=a*b-c

	return 0;
}

