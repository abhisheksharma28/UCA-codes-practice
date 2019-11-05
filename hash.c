#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct hash
{
    char s[20];
    int c;
};
struct hash h[100];
void hash1(char *p)
{
    int sum=0,i;
    for(i=0;p[i]!='\0';i++)
    {
        int n = (int)p[i]-97;
        sum=sum+n;
    }
    strcpy(h[sum].s,p);
    h[sum].c++;
}
int main()
{
    char str[100]={"is is is"};
    char x[10],i,k;
    for(i=0;i<strlen(str);i++)
    {
        int j=0;
        while(str[i]!=' ')
        {
            x[j]=str[i];
            i++;
            j++;
        }
        x[j]='\0';
        hash1(x);
    }
    // printf("%s=====%d\n",h[26].s,h[26].c);
    for(i=0;i<100;i++)
    {
        if(h[i].c>0)
        {
           printf("%s=====%d\n",h[i].s,h[i].c);
        }
    }
}
