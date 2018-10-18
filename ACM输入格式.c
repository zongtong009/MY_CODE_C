#include <stdio.h>

int main(){
    int N,M,i;//N为动物总数，M是用于直接变形的魔咒条数 
    
    scanf("%d %d",&N, &M); 
	
	int array_N1[M] ,array_N2[M],arrayM[M];  //M可以认为是输入行数   
    for(int i=0;i<M;i++) {
    	scanf("%d %d %d",&array_N1[i],&array_N2[i], &arrayM[i]);
    				//      动物1       动物2        魔咒i长度      		
	} 
	
    for(int i=0; i<M; i++){
		printf("%d ",array_N1[i]);
    }
	return 0;
}

