#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*��������[M,N]ֱ�������ĸ����������*/
int main(int argc, char *argv[]) {
	int m,n;
	int num=0,sum=0;
	//����
	printf("��������������m,n(m<n): ") ;
	scanf("%d %d",&m,&n);
	//
	for(int i=m;i<=n;i++){ 
		int is_prime=1;
		//�ж����� 
		if(i==1 ){
			continue;
		}else if(i==2 ||i==3){
			num+=1;
			sum+=i;
			continue;
		}
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				is_prime=0;
				break;
			}
		}
		//�����ۼ� 
		if(is_prime==1){
			num+=1;
			sum+=i;
		}
	}	
	printf("num=%d sum=%d",num,sum);
		return 0;
}

