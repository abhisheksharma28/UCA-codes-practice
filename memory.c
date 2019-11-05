#include<stdio.h>
void printint(int a)
{
   int i;
   unsigned char *ia =(unsigned char*)&a;
   int len=sizeof(a);
   for( i=0;i<len;i++)
   {
       printf("%p %x \n",&ia[i],ia[i]);
    }
}
int main()
{
  printint(12345);
}
