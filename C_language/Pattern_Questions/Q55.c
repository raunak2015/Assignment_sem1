#include<stdio.h>
int main()
{
    int n=4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        for (int k = i-1; k >= 1; k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= n-i+1; j++)
        {
            printf("%d ",j);
        }
        for (int j = n-i; j >=1; j--)
        {
            printf("%d ",j);
        }
        
        printf("\n");
        
    }
    
    
    return 0;
}