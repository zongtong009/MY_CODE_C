#include <stdio.h>
#include <stdlib.h>

/*ע��*/
int main(int argc, char *argv[]) {
	const int MONEY=100;
	int pay;
	
	printf("��������Ʒ�۸�"); 
	scanf("%d",&pay);
	//�ж� 
	if (pay>MONEY){
		printf("������%d,������С��%d����\n",MONEY,MONEY);
	}else{
		printf("Ӧ�һ���Ǯ%dԪ",MONEY-pay);
	}
	
	return 0;
}

