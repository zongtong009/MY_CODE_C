#include <stdio.h>
#include <stdlib.h>

/*×¢ÊÍ*/
int main(int argc, char *argv[]) {
	
	int num=0xff;
	unsigned mask=1u<<31;
	for(;mask;mask>>=1){
		printf("%d",num&mask ? 1:0);
	}	

	return 0;
}


