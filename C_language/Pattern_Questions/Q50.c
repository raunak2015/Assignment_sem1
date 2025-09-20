#include<stdio.h>
int main()
{
    int n=5;
    int num= (n*(n+1))/2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1 ; j++)
        {
            printf("%d ",num);
            num--;
        }
        printf("\n");
    }
    
    return 0;
}