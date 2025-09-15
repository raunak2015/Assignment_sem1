#include<stdio.h>
int main()
{
    int n=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int k =1 ; k <=(n*2-1)-(i*2) ; k++)
        {
            printf("%d ",k);
        }
        
        printf("\n");
    }
    
    return 0;
}