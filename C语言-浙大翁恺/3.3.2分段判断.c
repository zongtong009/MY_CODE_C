#include <stdio.h>
#include <stdlib.h>

/*×¢ÊÍ*/
int main(int argc, char *argv[]) {
	int a=-5,f;
	if (a<0){
		f=-1;
	}else{
		if(a==0){
			f=0;
		}else{
			f=1;
		}
	}
	printf("f=%d",f);

	return 0;
}

