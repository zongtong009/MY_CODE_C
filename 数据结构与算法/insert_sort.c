#include <stdio.h>
#include <stdlib.h>
//��һ�� 
//void insert_sort(int array[],int len){   //��������  
//	int i,temp,j;    
//	for(i=1;i<len;i++){  //�ӵڶ�������ʼ 
//		temp=array[i]; 	//i		1	2	3	  
//		j=i-1; 			//j		0	1	2
//		while(j>=0 && array[j]>temp){//�����߱����ұߵ�������
//			array[j+1]=array[j];
//			j--;
//		}
//		array[j+1]=temp;	//j+1	1	2	2
//	}
//}
void insert_sort(int *array,unsigned int len){
    int i,j;
    int temp;
    for(i=1;i<len;i++){
        temp=*(array+i);
        for(j=i;j>0&&*(array+j-1)>temp;j--)
            *(array+j)=*(array+j-1);
        
        *(array+j)=temp;
    }
}
/************************************************************/
int main(int argc, char *argv[]) {
	int a[]={7,8,16,3,5,32,51,25,5,4,9,13,59,2,8,6,};
		/*	7 8
			7 8	 16
			7 8  3 16>>> 7 3 8 16>>> 3 7 8 16
			3 7 8 16 5>>>3 7 8 5 16>>>3 7 5 8 16>>>3 5 7 8 16>>>*/			
	int len=sizeof(a)/sizeof(a[0]);
	insert_sort(a,len);
	printf("len(a[])=%d\n\n",len);
//******************************
    for(int i=0;i<len;i++)
		printf("%d\t",a[i]);
			
	return 0;
}


