#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*153=1**3+5**3+3**3 ˮ�ɻ���*/
int main(int argc, char *argv[]) {
	int N;      //  3<=N<=7
	printf("������һ����N(3<=N<=7): ");
	scanf("%d",&N);
	//�ܺ�
	for(int i=pow(10,N-1); i<pow(10,N); i++) {
		int i_test=i, sum=0 ;  //sum����
		/*while���㣬if�ж�*******************************/
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

