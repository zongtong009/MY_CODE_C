#include <stdio.h>
#include <stdlib.h>
/****************************************************************/
int main(int argc, char *argv[]) {

	int type;
	scanf("%d",&type);
	
	switch (type) {
		case  1:printf("type = 1\n");break;
		case  2:printf("type = 2\n");break;
		case  3:printf("type = 3\n");break;
		case  4:printf("type = 4\n");break;
		default:printf("default \n");break;
		
	}

	return 0;
}

