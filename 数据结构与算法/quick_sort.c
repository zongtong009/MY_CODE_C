#include <stdio.h>
#include <stdlib.h>
/* 	1���ȴ�������ȡ��һ������Ϊ��׼��
	2���������̣���������������ȫ�ŵ������ұߣ�С�ڻ����������ȫ�ŵ��������
	3���ٶ����������ظ��ڶ�����ֱ��������ֻ��һ����  */
void quick_sort(int *a, int left, int right){
	/*�������������ڻ��ߵ����ұߵ������ʹ����Ѿ��������һ������*/  
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
    quick_sort(a, left, i - 1);  //����������� 
    quick_sort(a, i + 1, right); //�Ҳ��������� 
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

