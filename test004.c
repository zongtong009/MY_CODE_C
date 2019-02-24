#include <stdio.h>

/****************************************************************/
int main(void) {
	int array[2][3]={0};
	printf("%x\n",&array);
	printf("%x\n",array);
	printf("%x\n",&array+1); //整体以后的地址，已经超出了array所占地址
	printf("%x\n",(&(array)+1)); //==上面的，很明显，按优先级来
	printf("%x\n\n",array+1); //单纯指下一个最小地址
	
	printf("%x\n",&array[0]);
	printf("%x\n",array[0]);
	printf("%x\n",&array[0]+1); //超出了array[0]所占地址
	printf("%x\n",array[0]+1);
	printf("%x\n\n\n",array[1]);
	
	return 0;
}

