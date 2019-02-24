#include <stdio.h>
#include <string.h>

int main () {
	char str1[15]={0};
	char str2[15]={0};
	int ret=0;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "ABCDEF", 6);

	ret = memcmp(str1, str2, 5);

	if(ret < 0) {
		printf("str2 小于 str1");
	} else if(ret > 0) {
		printf("str1 大于 str2");
	} else {
		printf("str1 等于 str2");
	}

	return(0);
}

