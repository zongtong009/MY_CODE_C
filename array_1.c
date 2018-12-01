#include <stdio.h>

int main () {
	int n[ 10 ]; /* n 是一个包含 10 个整数的数组 */

	/* 初始化数组元素 */
	for ( int i = 0; i < 10; i++ ) {
		n[ i ] = i + 100; /* 设置元素 i 为 i + 100 */
		printf("Array[%d] = %d\n", i, n[ i ] );  // 输出数组中每个元素的值
	}

	return 0;
}
