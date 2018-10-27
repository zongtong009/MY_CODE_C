#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*153=1**3+5**3+3**3 水仙花数*/
int main(int argc, char *argv[]) {
	int N;      //  3<=N<=7
	printf("请输入一个数N(3<=N<=7): ");
	scanf("%d",&N);
	//总和
	for(int i=pow(10,N-1); i<pow(10,N); i++) {
		int i_test=i, sum=0 ;  //sum置零
		/*while计算，if判断*******************************/
		while(i_test>0) {
			sum+=pow(i_test%10,N);
			i_test=i_test/10;
		}
		if(sum==i) {
			printf("%d\n",sum);
		}
	}


	return 0;
}

