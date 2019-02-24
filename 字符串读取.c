#include <stdio.h>

#define IN 1    /* inside a word*/
#define OUT 0   /* outside a word*/
/*C语言的getchar()是逐个读入的, 不因换行而变化,
	事实上下一行和换行符\n靠在一起**/
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
			state = IN;     //输入一个单词
			nw++;           //单词数++
		}
	}
	printf("%d行 %d个单词 %d个字符\n",n1,nw,nc);
	
	return 0;
}

