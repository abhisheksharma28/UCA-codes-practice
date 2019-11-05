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
    if(root=='\0')
    {
        struct node *new1=(struct node *)malloc(sizeof(struct node));
        new1->info=a;
        new1->l='\0';
        new1->r='\0';
        root=new1;
    }
    else
    {
    struct node *p=root;
    struct node *q;
    while(p!=NULL)
    {
        if(a<p->info)
        {
            q=p;
            p=p->l;
        }
        else
        {
            q=p;
            p=p->r;
        }
    }
    struct node *new1=(struct node *)malloc(sizeof(struct node));
    new1->info=a;
    new1->l='\0';
    new1->r='\0';
    if(a<q->info)
        q->l=new1;
    else
        q->r=new1;
    }
}
void print(struct node *p1)
{
    if(p1==NULL)
        return;
    printf("%d ",p1->info);
        print(p1->l);
        print(p1->r);
}
struct node *a;
struct node *b;
int arr[100];
void search(int x)
{
    a=root;
    if(x<root->info)
        b=root->l;
    else
        b=root->r;
    while(b!=NULL)
    {
        if(b->info==x)
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
    printf("%d  %d\n",b->info,a->info);
}
void path(int y)
{
   struct node *p=root;
   int i=1;
   if(p->info==y)
   {
       printf("%d",p->info);
   }
   else
   {
       arr[0]=root->info;
      while(p!=NULL)
     {
        if(y<p->info)
        {
            p=p->l;
            arr[i]=p->info;
            i++;
        }
        if(y>p->info)
        {
            p=p->r;
            arr[i]=p->info;
            i++;
        }
        if(y==p->info)
        break;
     }
     int j;
   for(j=0;j<i;j++)
   {
       printf("%d ",arr[j]);
   }
   }
}
int height(struct node *p)
{
    int rh=0;
    int lh=0;
    if(p==NULL)
    {
        return 0;
    }
    else
    {
        rh=height(p->r);
        lh=height(p->l);
        if(lh>rh)
            return lh+1;
        else
            return rh+1;
    }
}
void printGivenLevel(struct node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->info);
    else if (level > 1)
    {
        printGivenLevel(root->l, level-1);
        printGivenLevel(root->r, level-1);
    }
}
void spiral(struct node* root, int level,int x)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->info);
    else if (level > 1)
    {
        if(x%2==0)
        {
           spiral(root->l, level-1,x);
           spiral(root->r, level-1,x);
        }
        else
        {
            spiral(root->r, level-1,x);
            spiral(root->l, level-1,x);
        }
    }
}
int main()
{
    insert(80);
    insert(50);
    insert(40);
    insert(45);
    insert(90);
    insert(100);
    search(45);
    int h=height(root);
    printf("%d\n",h);
    path(80);
    print(root);
    int i;
    for(i=1;i<=h;i++)
    {
        printGivenLevel(root,i);
        printf("\n");
    }
    int x=1;
    for(i=1;i<=h;i++)
    {
        spiral(root,i,x);
        x++;
        printf("\n");
    }
}
