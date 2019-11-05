
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *l;
    struct node *r;
};
struct node *root='\0';
void insert(int a)
{
    if(root=='\0')
    {
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        newnode->info=a;
        newnode->l='\0';
        newnode->r='\0';
        root=newnode;
    }
    else
    {
        struct node *p=root;
        while(p!='\0')
        {
            if(a<p->info)
            {
                if(p->l=='\0')
                {
                      struct node *newnode=(struct node *)malloc(sizeof(struct node));
        newnode->info=a;
        newnode->l='\0';
        newnode->r='\0';
        p->l=newnode;
        break;
                }
                p=p->l;
            }
            else
            {
                if(p->r=='\0')
                {
                      struct node *newnode=(struct node *)malloc(sizeof(struct node));
        newnode->info=a;
        newnode->l='\0';
        newnode->r='\0';
        p->r=newnode;
        break;
                }
                p=p->r;
            }
        }
    }
}
void print(struct node *q)
{
    if(q!='\0')
    {
        printf("%d    ",q->info);
        print(q->l);
        print(q->r);
    }
}
int ht(struct node *root)
{
    int rht=0;
    int lht=0;
    if(root==NULL)
        return 0;
    else
    {
        lht=ht(root->l);
        rht=ht(root->r);
        if(lht>rht)
            return lht+1;
        else
            return rht+1;
    }
}
int main()
{
    insert(50);
    insert(40);
    insert(30);
    insert(60);
    insert(45);
    insert(43);
    insert(42);
    print(root);
    int h=ht(root);
    printf("\n%d",h);
}
