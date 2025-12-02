#include<stdio.h>
int main(){
    int mat[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int i,sum=0;
    
    for ( i = 1; i <=3; i++)
    {
        sum = sum+mat[2][i];
    }

    printf("%d",sum);
    

    return 0;
}