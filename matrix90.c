#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int k=0,l=n-1,c=n;
    int arr[n][n];
    int arr1[n][n];
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           scanf("%d",&arr[i][j]);
       }
    }
    while(l>=0)
    {
        for(j=0;j<c;j++)
        {
            arr1[j][l] = arr[k][j];
        }
        k++;
        l--;
    }
    for(i=0;i<c;i++)
    {
       for(j=0;j<c;j++)
       {
           printf("%d ",arr1[i][j]);
       }
       printf("\n");
    }
}
