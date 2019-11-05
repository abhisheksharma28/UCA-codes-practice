
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start;
struct node *end;
void insertatbegin(int item)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->next=NULL;
    temp->prev=NULL;
    if(start==NULL)
    {
        start=temp;
        end=temp;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
}
void reverse()
{
    struct node *prevnode,*curnode;
    if(start!=NULL)
    {
        prevnode=start;
        curnode=start->next;
        start=start->next;}

    prevnode->next=NULL;
    while(start!=NULL)
    {
        start=start->next;
        curnode->next=prevnode;
        prevnode=curnode;
        curnode=start;
    }
    start=prevnode;
}
void show()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=start;
    while(temp->next!=NULL)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }
     printf("%d \n",temp->data);
}
int main()
{
    insertatbegin(1);
    insertatbegin(2);
    insertatbegin(3);
    insertatbegin(4);
    reverse();
    show();
}
