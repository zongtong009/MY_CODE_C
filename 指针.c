#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*×¢ÊÍ*/
int main(int argc, char *argv[]) {
	int a[5]={1,2,3,4,5,};
	
	int* ip=&a[4];
	printf("\n%p",ip);
	++ip;
	printf("\n%p",ip);
	*ip=12;
	printf("\n%p", ip);
	ip=&a[0];
	printf("\n%p",ip);
	ip=&a[1];
	printf("\n%p",ip);
	ip=&a[2];
	printf("\n%p",ip);
	ip=&a[3];
	printf("\n%p",ip);

	return 0;
}
