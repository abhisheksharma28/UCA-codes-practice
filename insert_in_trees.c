#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *l;
    struct node *r;
};
struct node *root = '\0';
void insert(int a)
{
    if(root==NULL)
    {
        struct node *new1 = (struct node*)malloc(sizeof(struct node));
        new1->info = a;
        new1->l = NULL;
        new1->r = NULL;
        root = new1;
    }
    else
    {
       struct node *p = root;
       //struct node *ptr;
    while(p!=NULL)
    {
        if(p->info>a)
        {
            if(p->l==NULL)
            {
               struct node *new1 = (struct node*)malloc(sizeof(struct node));
                new1->info = a;
                new1->l = NULL;
                new1->r = NULL;
                p->l=new1;
                break;
            }
            p=p->l;

        }
        else
        {
            if(p->r==NULL)
            {
               struct node *new1 = (struct node*)malloc(sizeof(struct node));
                new1->info = a;
                new1->l = NULL;
                new1->r = NULL;
                p->r=new1;
                break;
            }
            p=p->r;
        }
    }
    }
}
struct node *a;  //parent
    struct node *b;   //child
void search(int x)
{
    a= root;

    if(x<root->info)
        b = root->l;
    else
        b = root->r;
    while(b!='\0')
    {
        if(b->info == x)
            break;
        if(b->info<x)
        {
            a=b;
            b=b->r;
        }
        if(b->info>x)
        {
            a=b;
            b=b->l;
        }
    }
    printf("%d  %d",a->info,b->info);
}
void print(struct node *q)
{
    if(q!=NULL)
    {
        print(q->l);
        print(q->r);
        printf("%d ",q->info);
    }
}
int main()
{
    insert(50);
    insert(40);
    insert(30);
    insert(45);
    insert(42);
    insert(47);
    insert(46);
    insert(60);
    search(45);
    del1(a,b);
}
