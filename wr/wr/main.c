#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};
typedef struct node * nodeptr;
int main()
{
    nodeptr head,p,t;
    int i,j,n;
    head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&j);
        p->data=j;
        p->next=head->next;
        head->next=p;
    }
    t=head->next;
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }
    return 0;
}

