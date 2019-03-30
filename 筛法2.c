#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
int main(int argc, char * argv[]) {
	//寻找2~num之间的所有素数
	if(argc < 2) {
		printf("Usage : %s num\n\n", argv[0]);
		return 0;
	}
	int iMax = atoi(argv[1]);

	if(iMax < 2) {
		printf("num is too little, num >=2");
		return 0;
	}

	char *p = (char *)malloc(sizeof(char) * iMax + 1);
	memset(p, 0,sizeof(char) * iMax + 1);

	int i = 0, j = 0, k = 0;
	for(i = 2; i <= iMax; i++) {
		for(j = i + i; j <= iMax; j += i) {
			p[j] = 1;
		}
	}
	FILE * fp = NULL;
	//程序执行完成后，文件 prime-number.txt中就是我们需要的素数
	if((fp = fopen("prime2.txt", "w")) == NULL) {
		return 0;
	}
	k = 0;
	int iAll = 0;
	for(i = 2; i <= iMax; i++) {
		if(0 == p[i]) {
			iAll ++;
			k++;
			// output to file : fp，把这些素数写入文件
			fprintf(fp, "%6d ", i);
			if(10 == k) {
				fprintf(fp, "\n");
				k = 0;
			}
			//printf("%d ", i);
		}
	}
	printf("\n");
	fclose(fp);
	free(p);
	printf("all : %d\n", iAll);

	return 0;
}

