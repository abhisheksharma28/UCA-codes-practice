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
            ptr->f=ptr->f;
        }
        new1->b=ptr;
        ptr->f=new1;
    }
}
void ins_bt()
{
    int a;
    struct node *ptr=start;
    printf("Enter number in bt");
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
        int loc,i;
        printf("enter location");
        scanf("%d",&loc);
        for(i=0;i<loc;i++)
        {
            ptr=ptr->f;
        }
        new1->info=a;
        new1->f=ptr->f;
        struct node *q=ptr->f;
        new1->b=ptr;
        q->b=new1;
        ptr->f=new1;

    }
}
void delete_f()
{
   if(start=='\0')
   {
       printf("underflow");
   }
   else
   {
       start=start->f;
       start->b=NULL;
       printf("deleted");
   }
}
void delete_b()
{
    struct node *p=start;
   if(start=='\0')
   {
       printf("underflow");
   }
   else
   {
       while(p->f!='\0')
       {
           p=p->f;
       }
       p=p->b;
       p->f=NULL;
   }
}
void reverse_list()
{

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
    int n;
    while(1)
    {
        printf("Enter the no.");
       scanf("%d",&n);
       if(n==0)
       {
           break;
       }
       else
       {
           switch(n)
           {
                case 1:
                    ins();
                    break;
                case 2:
                    ins_last();
                    break;
                case 3:
                    ins_bt();
                    break;
                case 4:
                    delete_f();
                    break;
                case 5:
                    delete_b();
                    break;
                case 6:
                    reverse_list();
                case 999:
                    print();
                    break;
                default:
                    print("sorry");
                    break;
           }

       }

    }
}
