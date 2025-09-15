#include<stdio.h>
int main()
{
    int n=5;
    for (int i = n; i >= 0; i--)
    {
        for (int j = n; j >=i; j--)
        {
            printf("  ");

        }
        for (int k = 0; k < i; k++)
        {
            printf("%c ",k+65);
        }
        
        printf("\n");
    }
    
    return 0;
}