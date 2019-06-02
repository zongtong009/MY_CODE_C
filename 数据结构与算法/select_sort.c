#include <stdio.h>

void swap(int *a,int *b) { //交換兩個變數
	int temp = *a;
	*a = *b;
	*b = temp;
}
void select_sort(int arr[], int len) {
	int i,j;

	for (i = 0 ; i < len - 1 ; i++) {
		int min = i;
		for (j = i + 1; j < len; j++)     //走訪未排序的元素
			if (arr[j] < arr[min])    //找到目前最小值
				min = j;    //紀錄最小值
		swap(&arr[min], &arr[i]);    //做交換
	}
}
/****************************************************************/
int main(void) {
	int a[]={7,8,16,3,5,32,51,25,5,4,9,13,59,2,8,6,};
	int len=sizeof(a)/sizeof(a[0]);

	select_sort(a,len);

    for(int i=0;i<len;i++){
		printf("%d\t",a[i]);
	}

	return 0;
}

