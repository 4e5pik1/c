#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;//self referential structure
}*head,*temp,*newnode;
int main()
{
    int n,i,j;
    int count=0;
    printf("enter memory size:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));//memory create
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;//head first node address will save and not moving
            temp=newnode;//temp for traversal
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp=head;//display or printing element
    while(temp!=NULL)
    {
        printf(" %d",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n count:%d",count);
    return 0;
}





