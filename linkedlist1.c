#include<stdio.h>
#include<stdlib.h>
int search(int );
int count();
struct node 
{
    int data;
    struct node *next;
}*head,*new1,*new2,*new3,*new4,*temp;

void create()
{   
    head=(struct node*)malloc(sizeof(struct node));
    new1=(struct node*)malloc(sizeof(struct node));
    new2=(struct node*)malloc(sizeof(struct node));
    new3=(struct node*)malloc(sizeof(struct node));
    new4=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("no allocation");
    }
    
    printf("enter the 1st data:");
    int data;
    scanf("%d",&data);
    head->data=data;
    head->next=new1;
    printf("enter the 2nd data:");
    scanf("%d",&data);
    new1->data=data;
    new1->next=new2;
    printf("enter the 4th data:");
    scanf("%d",&data);
    new2->data=data;
    new2->next=new3;
    printf("enter the 4th data:");
    scanf("%d",&data);
    new3->data=data;
    new3->next=new4;
    printf("enter the 4th data:");
    scanf("%d",&data);
    new4->data=data;
    new4->next=NULL;
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



int main()

{ 
    int key;
    create();
    traverse(head);
    printf("\nCount: %d",count());
    printf("Enter the key: ");
    scanf("%d",&key);
    int x=search(key);
    printf("\nsearch index at: %d",x);
}
int count()
{
    int c=0;
    temp=head;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}
int search(int key)
{
    int i=0;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return i;
        }
        temp=temp->next;
        i++;
    }
}