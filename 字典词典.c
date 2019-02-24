#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��bug�����������������ѭ��
#define MAXWORD 25	//��ĸ�������ֵ
#define MAXMEAN 50 	//(��ĸ����)�������ֵ

struct record { //��¼�ṹ_����
	char word[MAXWORD+1];   //key
	char mean[MAXMEAN+1];
};

struct lnode {  //������ṹ
	struct record data;
	struct lnode *next;
};

/* �������� */
void Add(struct lnode *list); 		/* ��� */
void Search(struct lnode *list);	/* ���� */
void Edit(struct lnode *list);		/* �޸� */
void Delete(struct lnode *list);    /* ɾ�� */
void Display(struct lnode *list);	/* ��ʾ���м�¼ */
struct lnode *SearchPrimarykey(struct lnode *list, char *key);	/* ���������� */
void InsertList(struct lnode *list, struct lnode *n);	/* ����¼��������ĸ����������� */
void FreeList(struct lnode *list);	/* �ͷ���������ռ� */
void DisplayTableHead(void);        /* ��ʾ��ͷ */
void DisplayRecord(struct lnode *r);/* ��ʾһ����¼ */
void DisplayMenu(void);             /* ��ʾ�˵� */

/* ������ */
int main(int argc, char *argv[]) {
	struct lnode *dictionary;
	/* ����ѡ������Ϊ���˳�����ӡ����ҡ�ɾ������ʾ���м�¼ */
	enum {EXIT, ADD, SEARCH, EDIT, DEL, DISP} function = DISP;

	/* ͷ��� */
	dictionary = (struct lnode *)malloc(sizeof(struct lnode));
	if(dictionary != NULL) {
		dictionary->next = NULL; //��ʼ��
	}

	while(function != EXIT) {
		DisplayMenu();
		scanf("%d",&function);
		while(function < EXIT || function > DISP) {
			scanf("%d",&function);
		}

		switch(function) {
			case ADD:
				Add(dictionary);
				break;
			case SEARCH:
				Search(dictionary);
				break;
			case EDIT:
				Edit(dictionary);
				break;
			case DEL:
				Delete(dictionary);
				break;
			case DISP:
				Display(dictionary);
				break;
			case EXIT:
				exit(0);
				break;
			default:
				printf("Input Error! Please input the right word.");
				break;
		}
	}
	FreeList(dictionary);
}

/* ��� */
void Add(struct lnode *list) {
	int i;
	struct record t;
	struct lnode *n, *r;

	/* ¼���¼ */
	printf("Please input the word: ");
	getchar();
	gets(t.word);
	fflush(stdin);
	printf("Please input the meaning:");
	gets( t.mean);

	/* �жϼ�¼�Ƿ��Ѵ��ڣ�����������ʾ��¼��������������Ӽ�¼ */
	if((r = SearchPrimarykey(list, t.word)) == NULL) {
		/* ����lnode�ռ䲢��ʼ�� */
		n = (struct lnode *)malloc(sizeof(struct lnode));
		if(n != NULL) {
			/* ���Ƽ�¼ */
			strcpy((n->data).word,t.word);
			strcpy((n->data).mean, t.mean);
			/* �������� */
			InsertList(list, n);
		}
	} else {
		printf("Record Existed!\n");
		DisplayTableHead();
		DisplayRecord(r);
	}
}

/* �޸� */
void Edit(struct lnode *list) {

	struct record t;
	struct lnode *r, *p;
	char e[MAXWORD];
	p = list;

	printf("Please input the word you want to edit: ");
	getchar();
	gets(e);

	if((r = SearchPrimarykey(list, e)) != NULL) {
		fflush(stdin);
		printf("Please edit the word: ");
		gets(t.word);
		printf("Please edit the meaning:");
		gets(t.mean);

		/* ���Ƽ�¼ */
		strcpy((r->data).word,t.word);
		strcpy((r->data).mean,t.mean);


	} else {
		printf("Record cann't find!\n");
	}
}
/* ���� */
void Search(struct lnode *list) {
	char e[MAXWORD];
	struct lnode *r;

	printf("Please input the word you want to search: ");
	getchar();
	gets(e);

	if((r = SearchPrimarykey(list, e)) != NULL) {
		DisplayTableHead();
		DisplayRecord(r);
	} else {
		printf("Cann't find the word.");
	}
}

/* ɾ�� */
void Delete(struct lnode *list) {
	char e[MAXWORD];
	struct lnode *q, *p;
	q = list;
	p = list->next;

	printf("Please input the word you want to delete: ");
	getchar();
	gets(e);

	while(p != NULL) {
		if(strcmp((p->data).word, e) == 0) {
			q->next = p->next;
			free(p);    /* �ͷſռ� */
			return ;    /* �������� */
		}
		q = p;
		p = p->next;
	}
}

/* ��ʾ���м�¼ */
void Display(struct lnode *list) {
	int c = 0;
	struct lnode *p = list->next;

	printf("\n--------- ReaderMessage Display ---------\n");
	DisplayTableHead();
	while(p != NULL) {
		DisplayRecord(p);
		c++;    /* ��¼���� */
		p = p->next;
	}
	printf("\n--------- Total:  %d  Record(s) ---------\n",c);
}

/* ���������� */
struct lnode *SearchPrimarykey(struct lnode *list, char *key) {
	struct lnode *p = list->next;

	while (p != NULL) {
		if(strcmp((p->data).word, key) == 0) {
			return p;
		}
		p = p->next;
	}
	return NULL;
}

/* ����¼��������ĸ����������� */
void InsertList(struct lnode *list, struct lnode *n) {
	struct lnode *p = list;

	while (p->next != NULL && strcmp((p->next->data).word, (n->data).word) < 0) {
		p = p->next;
	}
	n->next = p->next;
	p->next = n;
}

/* �ͷ���������ռ� */
void FreeList(struct lnode *list) {
	struct lnode *p = list;
	while(p->next != NULL) {
		p = p->next;
		free(list);
		list = p;
	}
	free(p);
}

/* ��ʾ��ͷ */
void DisplayTableHead(void) {
	printf("%-10s %s\n","WORD","MEANING");
}

/* ��ʾһ����¼ */
void DisplayRecord(struct lnode *r) {
	printf("%-10s %s\n", (r->data).word, (r->data).mean);
}

/* ��ʾ�˵� */
void DisplayMenu(void) {
	printf("\n--------- ReaderMessage Menu ---------\n");
	printf("\n\t1.Add\n\t2.Search\n\t3.Edit\n\t4.Del\n\t5.Display\n\t0.Exit\n");
	printf("\nPlease select the function number(0-5):");
}
