#include<stdio.h>
int main()
{
    int arr[100];
    int i=0,n=0;
    while(1)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
            break;
        i++;
        n++;
    }
    printf("%d",n);
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(arr[i]%2==0)
        {

        }
        else

        }

    }*/
}
