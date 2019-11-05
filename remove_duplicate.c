#include<stdio.h>
struct node
{
    int info;
    struct node* f;
    struct node* b;
};
struct node* start='\0';
void ins()
{
    int a;
    printf("Enter number in front");
    scanf("%d",&a);
    struct node *new1;
    new1 = (struct node *)malloc(sizeof(struct node));
    if(start=='\0')
    {
        new1->info=a;
        new1->b='\0';
        new1->f='\0';
        start=new1;
    }
    else
    {
        new1->info=a;
        new1->f=start;
        new1->b='\0';
        start->b=new1;
        start=new1;
    }
}
void ins_last()
{
    int a;
    printf("Enter number at last");
    scanf("%d",&a);
    struct node *new1;
    new1 = (struct node *)malloc(sizeof(struct node));
    if(start=='\0')
    {
        new1->info=a;
        new1->b='\0';
        new1->f='\0';
        start=new1;
    }
    else
    {
        new1->info=a;
        new1->f='\0';
        struct node *ptr=start;
        while(ptr->f!='\0')
        {
            ptr=ptr->f;
        }
        new1->b=ptr;
        ptr->f=new1;
    }
}
void dupli()
{
    struct node *p = start->f;
    struct node *p1 = start;
    struct node *ptr;
    struct node *q=start;
    while(1)
    {
        if(p1->f=='\0')
        {
            break;
        }
        while(1)
        {

            if(p->f=='\0')
            {
                  if(p1->info==p->info)
                {
                    ptr=p->f;
                    q->f=ptr;
                }
              break;
            }
            ]if(p1->info==p->info)
            {
                ptr=p->f;
                q->f=ptr->f;
                p=p->f;
            }
            else
            {
                p=p->f;
                q=q->f;
            }
        }
        p1=p1->f;
    }
}
void print()
{
   struct node *p = start;
   while(p!='\0')
   {
       printf("%d ",p->info);
       p=p->f;
   }
   printf("\n");
}
int main()
{
    int n,i;
    printf("Enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        ins();
    }
    dupli();
    print();
}
