#include <stdio.h>
#include <stdlib.h>
/****************************************************************/
int main(int argc, char *argv[]) {
	while(1) {
		int n;
		puts("请输入一个整数： ");
		if (scanf("%d",&n)==0) {
			break;
		}
		for (int i=0; i<n; i++) {
			printf("sdsdgf");
		}
	}
	return 0;
}
//	int n;
//	while(scanf("%d",&n)!=EOF) {
//		printf("sfgdsf");
//	};


/*		int x = scanf("%d",&a);
		//这是定义一个整型变量 x，scanf是输入一个值a，当你输入一个整型值，
		//就会得到x = 1(判断为真)；而当你键输入一个字符或其他不符合条件的内容时，
		//就会得到x = 0(判断为假)
		if (x==0) {
			break;
		}*/

