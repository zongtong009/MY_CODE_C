#include <stdio.h>
#include <stdlib.h>
/* 	1、先从数列中取出一个数作为基准数
	2、分区过程，将比这个数大的数全放到它的右边，小于或等于它的数全放到它的左边
	3、再对左右区间重复第二步，直到各区间只有一个数  */
void quick_sort(int *a, int left, int right){
	/*如果左边索引大于或者等于右边的索引就代表已经整理完成一个组了*/  
    if(left >= right){
        return ;
    }
    int i = left;
    int j = right;
    int key = a[left];     
    while(i < j){ 
        while(i < j && key <= a[j]){ 
            j--;
        }         
        a[i] = a[j];         
        while(i < j && key >= a[i]){      
            i++;
        }         
        a[j] = a[i];
    }     
    a[i] = key;
    quick_sort(a, left, i - 1);  //左侧区域排序 
    quick_sort(a, i + 1, right); //右侧区域排序 
}
int main(int argc, char *argv[]) {
//******************************
	int a[]={7,8,16,3,5,32,51,25,5,4,9,13,59,2,8,6,};
	int N=sizeof(a)/sizeof(a[0]);
	quick_sort(a,0,N-1);
    for(int i=0;i<N;i++){
		printf("%d\t",a[i]);
	}
	
	
	return 0;
}

