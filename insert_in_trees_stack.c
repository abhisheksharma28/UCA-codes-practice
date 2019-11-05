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
/*void print(struct node *q)
{
    if(q!=NULL)
    {
        print(q->l);
        print(q->r);
        printf("%d ",q->info);
    }
}*/
int isFull()
{
  return top==(SIZE-1);
}

int isEmpty()
{
  return top==-1;
}

// Function to add an item to stack.  It increases top by 1
int push(int item)
{
  if (isFull())
  {
    printf("OVERFLOW");
    return -1;
  }
  printf("%d pushed to stack\n",item);
  Stack[++top] = item;
  printf("Top is now at %d\n", top);
}

// Function to remove an item from stack.  It decreases top by 1
int pop()
{
  int temp;
  if (isEmpty())
  {
    printf("UNDERFLOW \n");
    return -1;
  }
  temp=Stack[top--];
  printf("%d popped from stack\n", temp);
  printf("Top is now at %d\n", top);
  return temp;
}
int main()
{
    insert(50);
    insert(40);
    insert(30);
    insert(45);
    insert(70);
    insert(60);
    print(root);
}

