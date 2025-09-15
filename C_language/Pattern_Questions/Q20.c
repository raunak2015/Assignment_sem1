#include<stdio.h>
int main()
{
    int n=6, k=65;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
    
    return 0;
}