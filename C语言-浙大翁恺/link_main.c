#include <stdio.h>
#include <stdlib.h>
#include "link.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct _list
{
    Node *head;
} List;

int main(int argc, char *argv[])
{

    Node *head = NULL;
    List list;
    int number;
    list.head = NULL;
    do
    {
        scanf("%d", &number);
        if (number != -1)
        {
            head = add(head, number)
        }
    } while (number != -1);

    return 0;
}
void add(List *pList, int number)
{
    //add to linked-list
    Node *p = (Node *)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    //find the last
    Node *last = pList->head;
    if (last)
    {
        while (last->next)
        {
            last = last->next
        }
        // attach
        last->next = p;
    }
    else
    {
        pList->head = p;
    }
}
int funnn(void){
   printf()
   

}