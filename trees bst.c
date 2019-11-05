
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
  struct node *a;
    struct node *b;//parent
void search(int x)
{
a=root;
   /* if(x<root->info)
    {
         b=root->l;
    }
    else
    {
         b=root->r;
    }*/
while(a!='\0')
{
    if(a->info==x)
        break;
    if(x<a->info)
    {
         b=a;
a=a->l;

    }
    if(x>a->info)
    {
           b=a;
               a=a->r;


    }

}
printf("search    %d    %d",a->info,b->info);
}
void delete1()
{
    struct node *t;
    if(a->l!='\0')
        t=a->l;
    else
        t=a->r;
        if(b->l==a)
            b->l=t;
        else
            b->r=t;


}
void delete2()
{
    struct node *t=a->r;
    struct node *t1;
    while(t->l!='\0')
    {
        t1=t;
        t=t->l;
    }
    if(b->l==a)
        b->l=t;
    else
        b->r=t;
    t->l=a->l;
    t->r=a->r;
    t1->l='\0';
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
   // insert(46);
    print(root);
printf("\nAfter searching and  deleting\n");
search(45);
printf("\n");
delete1();
//delete2();
print(root);
    //count(root);
}
