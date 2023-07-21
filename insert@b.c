#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode;
int main()
{
    int n,i,j;
    int count=0;
    printf("enter memory size:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    head=newnode;
    while(temp!=NULL)
    {
        printf(" %d",temp->data);
        newnode->next=head;
        count++;
    }
    printf("\n count:%d",count);
    return 0;
}





