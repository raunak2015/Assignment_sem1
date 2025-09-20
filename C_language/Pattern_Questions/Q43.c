#include<stdio.h>
int main()
{
    int row=4;
    int col=7;
    

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i==1 || i==row || j==col || j==1)
            {
                printf("%d",j);
            }
            else
            printf(" ");
            
        }
        printf("\n");
        
    }
    
    return 0;
}