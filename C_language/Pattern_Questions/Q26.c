#include<stdio.h>
int main()
{
    int n=5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = n*2-1; k >i*2 ; k--)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}