#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int main(int argc, char * argv[]) {
	//Ѱ��2~num֮�����������
//	if(argc < 2) {
//		printf("Usage : %s num\n", argv[0]);
//		return 0;
//	}
	int num;/*atoi(argv[1])*/
	printf("���������ֵnum: ");
	scanf("%d",&num);

	if(num < 2) {
		printf("num is too little, num >=2");
		return 0;
	}

	char *p = (char *)malloc(sizeof(char) * num + 1);
	memset(p, 0, sizeof(char) * num + 1);

	int i = 0, j = 0, k = 0;
	for(i = 2; i <= num; i++) {
		for(j = i + i; j <= num; j += i) {
			p[j] = 1;
		}
	}
	FILE * fp = NULL;
	//����ִ����ɺ��ļ� prime-number.txt�о���������Ҫ������
	if((fp = fopen("prime-number.txt", "w")) == NULL) {
		return 0;
	}
	k = 0;
	int iAll = 0;
	for(i = 2; i <= num; i++) {
		if(0 == p[i]) {
			iAll ++;
			k++;
			// output to file : fp������Щ����д���ļ�
			fprintf(fp, "%6d ", i);
			printf("%d\t",i);
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
	printf("�������� %d��\n", iAll);

	return 0;
}
