#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int t=0,r=n-1,b=n-1,l=0;
    int arr[n][n];
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           scanf("%d",&arr[i][j]);
       }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[t][i]);
    }
    printf('\n');
    for(j=0;j<n;j++)
    {
        printf("%d ",arr[j][r]);
    }
    printf('\n');
    for(j=0;j<n;j++)
    {
        printf("%d ",arr[b][i]);
    }
    printf('\n');
}
