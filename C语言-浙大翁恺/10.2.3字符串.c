#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*ע��*/
int main(int argc, char *argv[]) {
	int a[5]={1,2,3,4,5,};
	
	int *ip=&a[0];
	++ip;
	*ip=12;
	printf( "%p\n\n", ip);
	for(int i=0; i<5; i++){
		printf( "%d\n", a[i]);
	}
	printf("\n%p",ip);

	return 0;
}

