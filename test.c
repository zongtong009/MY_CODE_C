#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*×¢ÊÍ*/
int main(int argc, char *argv[]) {
	int a[5]={1,2,3,4,5,};
	
	int* ip=&a[4];
	++ip;
	*ip=12;
	printf( "%p\n\n", ip);
	ip=&a[0];
	for(int i=0; i<7; i++){
		printf( "%d\n", a[i]);
	}
	printf("\n%p",ip);

	return 0;
}
