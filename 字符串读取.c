#include <stdio.h>

#define IN 1    /* inside a word*/
#define OUT 0   /* outside a word*/
/*C���Ե�getchar()����������, �����ж��仯,
	��ʵ����һ�кͻ��з�\n����һ��**/
int main(void) {

	int c,n1,nw,nc,state;
	/* line, words,characters*/
	state = OUT;
	n1=nw=nc=0;
	while ((c=getchar()) !=EOF){
		nc++;
		if(c=='\n'){
			n1++;
		}
		if(c==' '|| c== '\n'||c=='\t'){
			state = OUT;    
		}else if(state == OUT){
			state = IN;     //����һ������
			nw++;           //������++
		}
	}
	printf("%d�� %d������ %d���ַ�\n",n1,nw,nc);
	
	return 0;
}

