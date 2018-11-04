#include <stdio.h>
#include <stdlib.h>
void insert_sort1(int a[], int n) {
	int i, j, k;
	for (i = 1; i < n; i++) {
		//为a[i] 在前面的a[0...i-1]有序区间中找一个合适的位置
		for (j = i - 1; j >= 0; j--) {
			if (a[j] < a[i])
				break;
		}
		//如找到了一个合适的位置
		if (j != i - 1) {//将比a[i] 大的数据向后移
			int temp = a[i];
			for (k = i - 1; k > j; k--) {
				a[k + 1] = a[k];
			}	
			a[k + 1] = temp;//将a[i]放到正确位置上
		}
	}
}

/****************************************************************/
int main(int argc, char *argv[]) {
	/**/int a[]= {7,8,16,3,5,32,51,25,5,4,9,13,59,2,8,6,};
	int N=sizeof(a)/sizeof(a[0]);
	insert_sort1(a,N);
	for(int i=0; i<N; i++) {
		printf("%d\t",a[i]);
	}


	return 0;
}

