#include<stdio.h>
int main()
{
    int i = 0, j = 0, sum = 0, row = 0;
    int arr_r = 3, arr_c = 3, start = 0, end = 3;
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int temp;
    while(i+j != arr_r + arr_c){
        if(row == 0){
            for(j = start; j < end; j++)
                temp += arr[i][j];
            j -= 2;
            i++;
        }
        else if(row == 1){
            temp += arr[i][j];
            j--;
            i++;
        }
        else if(row == 2){
            for(j = start; j < end; j++)
                temp += arr[i][j];
        }
        
        if(temp > sum)
            sum = temp;
        row = (row+1)%3;
    }
    printf("Sum = %d", sum);
    return 0;
}
