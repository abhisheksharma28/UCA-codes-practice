#include<stdlib.h>
#include<stdio.h>
struct node
{
int data;
struct node *next;

};
struct node *start,*end;
void add(int d)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->data=d;
temp->next=NULL;
if(start==NULL)
{
start=temp;
end=temp;
}
else
{
end->next=temp;
end=temp;

}
}
void bdel()
{
    start=start->next;
}
void del()
{
    struct node *temp=start;
    while(temp->next!=end)
    {
      temp=temp->next;
    }
    temp->next=NULL;
}
void badd(int d)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->data=d;
temp->next=NULL;
if(start==NULL)
{
start=temp;
end=temp;
}
else{
    temp->next=start;
    start=temp;
}

}

void rev()
{
  struct node *prevNode, *curNode;

    if(start != NULL)
    {
        prevNode = start;
        curNode = start->next;
        start = start->next;

        prevNode->next = NULL;

        while(start != NULL)
        {
            start = start->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = start;
        }

        start = prevNode;

        printf("SUCCESSFULLY REVERSED LIST\n");
    }

}
void show()
{
    struct node *temp;
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
     int data,c;
while(1)
{
printf("Enter your choice");
scanf("%d",&c);
if(c==1)
{
scanf("%d",&data);
add(data);
}
else if(c==2)
{
scanf("%d",&data);
badd(data);
}
else if(c==3)
{
bdel();
}
else if(c==4)
{
del();
}

else if(c==6)
{

rev();
}

else if(c==5)
{
show();
printf("abhi aage nahi kiya");

}
else
{
break;
}

}
return 0;
}
