#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*×¢ÊÍ*/
int main(int argc, char *argv[]) {
	int a[5]={1,2,3,4,5,};
	
	int *ip=a;
	printf( "%p\n\n", ip);
	for(int i=0; i<5; i++){
		printf( "%d\n", *ip++);
	}
	printf("\n%p",ip);

	return 0;
}

