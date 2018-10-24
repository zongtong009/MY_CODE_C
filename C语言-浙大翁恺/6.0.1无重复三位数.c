#include <stdio.h>
#include <stdlib.h>

/*注释*/
int main(int argc, char *argv[]) {
	int a,num=0;
	printf("请输入1到6之间的整数： ");
	scanf("%d",&a);
	
	//1<=a<=6 ,a_1=a+1,a_2=a+2,a_3=a+3 共4个数 
	int a_1=a+1,a_2=a+2,a_3=a+3;
	
	for(int i=a;i<=a+3;i++){  //a,a+1,a+2,a+3
		for(int j=a;j<=a+3;j++){ // 没有i 
			if(j==i){
				continue;
			}
			for(int k=a;k<=a+3;k++){ //没有j 
				if(k==j||k==i){
				continue;
				}
				num+=1;
				printf("%d\t",i*100+j*10+k);
				if(num%6==0){
					printf("\n");
				}
			}
			
		} 
		
	} 

	return 0;
}

