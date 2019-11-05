#include<stdio.h>
struct node
{
    int info;
    struct node *link;
};
void insert(struct node **start, int info)
{
    struct node *new1='\0';
    new1 = (struct node *)malloc(sizeof(struct node));
    if(new1=='\0')
        printf("overflow");
    new1->info=info;
    new1->link=*start;
    *start=new1;

}
void display(struct node *start)
{
    while(start)
    {
        printf("%d",start->info);
        start=start->info;
    }
}
int main()
{
  struct node *start='\0';
  int info;
  int i;
  int n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&info);
  insert(&start, info);

  }
    display(start);
}
