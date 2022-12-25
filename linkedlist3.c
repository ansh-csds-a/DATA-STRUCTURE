#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
}*head,*new,*temp;

void create()
{   
    head=(struct node*)malloc(sizeof(struct node));
    new=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("no allocation");
    }
    printf("enter the 1st data:");
    int data;
    scanf("%d",&data);
    head->data=data;
    head->next=new;
    printf("enter the 2nd data:");
    scanf("%d",&data);
    new->data=data;
    new->next=NULL;
}
    void traverse(struct node *head)
    {   temp=(struct node*)malloc(sizeof(struct node));
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    void search(int key)
    {
        temp=head;
        int i=1;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                printf("found at position%d:",i);
                exit(0);

            }
            else
            {
                temp=temp->next;
            }
            i++;


        }
    }
void sort()
{
    int temp;
    struct node *curr;
    struct node *next;
    for(int i=0;i<size;i++)
    {
        curr=head;
        next=head->next;
        for(int j=0;j<size;j++)
        {
            temp=curr->data;
            curr->data=next->data;
            next->data=temp;
        }
        curr=next;
        next=next->next;
    }
}
int main()
{
    int key;
    create();
    traverse(head);
    printf("enter the searched element");
    scanf("%d",&key);
    search(key);
    sort();
}