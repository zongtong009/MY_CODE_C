#include <stdio.h>
#include <stdlib.h>

/*ע��*/
int main(int argc, char *argv[]) {
	for(int i=1; i<=9; i++) {
		for(int j=1;j<=i;j++){
			printf("%d*%d=%d\t",j,i,i*j);
		}
		printf("\n");
	}

	return 0;
}

