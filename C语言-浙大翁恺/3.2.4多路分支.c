#include <stdio.h>
#include <stdlib.h>

/*ע��*/
int main(int argc, char *argv[]) {
	int type=2;
	switch(type){
		case 1:
			printf("    1");
			break;
		case 1+1:
			printf("    2");
			break;
		case 3:
			printf("    3");
			break;
		default:
			printf("������"); 
		//break;
		/*���default���м���Ҫbreak*/
	}
	

	return 0;
}

