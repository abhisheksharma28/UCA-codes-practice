#include<stdio.h>
int main()
{
     int n,loc,i,start = 1;
     scanf("%d",&n);
     int arr[n],end=n;
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     int item;
     scanf("%d",&item);
     int mid = (start+end)/2;
     while(arr[mid]!=item&&start<=end)
     {
         if(arr[mid]>item)
         {
             end = mid-1;
         }
         else
         {
             start = mid + 1;
         }
         mid = (start+end)/2;
          if(arr[mid]==item)
          printf(mid);
          else
           mid = NULL;
     }

}
