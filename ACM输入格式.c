#include <stdio.h>

int main(){
    int N,M,i;//NΪ����������M������ֱ�ӱ��ε�ħ������ 
    
    scanf("%d %d",&N, &M); 
	
	int array_N1[M] ,array_N2[M],arrayM[M];  //M������Ϊ����������   
    for(int i=0;i<M;i++) {
    	scanf("%d %d %d",&array_N1[i],&array_N2[i], &arrayM[i]);
    				//      ����1       ����2        ħ��i����      		
	} 
	
    for(int i=0; i<M; i++){
		printf("%d ",array_N1[i]);
    }
	return 0;
}

