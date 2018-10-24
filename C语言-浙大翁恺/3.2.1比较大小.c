#include <stdio.h>
#include <stdlib.h>

/*注释*/
int main(int argc, char *argv[]) {
	int a,b,c,max;
	printf("请输入三个数："); 
	scanf("%d %d %d",&a,&b,&c);
	max=a;
	if(b>a){
		max=b;
		if(c>a){
			max=c;
		}
	} 
	printf("最大数为%d",max);

	return 0;
}

