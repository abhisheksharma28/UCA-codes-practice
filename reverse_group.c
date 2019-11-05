#include<stdio.h>
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",arr[i][j]);
        }
    }
    int k=3;
    int n=9;
    void swap(int *p, int *q){
        int temp= *p;
        *p=*q;
        *q=temp;
    }
    for(int i=0; i<n; i+=k){
        for(int j=0; j<k/2; j++){
            swap((arr+i+j),(arr+i+k-1-j));
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
