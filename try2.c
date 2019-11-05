#include<stdio.h>
int main()
{
    int arr[100],arr1[100];
    int i=0,n=0,j=0,count=0,k,n1,temp,m=0,sum=0,avg;
    while(1)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
            break;
        i++;
        n++;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
           arr1[i] = arr[i];
           j++;
        }
        else
        count++;
    }
    n1=j;
    for(j=0;j<n1;++j)
    {
        for(k=0;k<n1;++k)
        {
            if(arr1[j]<arr1[k])
               {
                 temp=arr1[j];
                 arr1[j]=arr1[k];
                 arr1[k]=temp;
               }
        }
    }
    for(j=0;j<count;j++)
    {
        if(arr1[j]==arr1[j+1])
        {
            count = count+1;
        }
        else
        {
            sum = sum + arr1[j];
            m++;
        }
    }
    avg = sum/count;
    printf("%d",avg);
}
