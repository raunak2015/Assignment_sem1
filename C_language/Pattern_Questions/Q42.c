#include<stdio.h>
int main()
{
    int row=4;
    int col=7;
    // printf("Enter value of rows: ");
    // scanf("%d", &row);
    // printf("Enter value of cols: ");
    // scanf("%d", &col);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i==1 || i==row || j==col || j==1)
            {
                printf("*");
            }
            else
            printf(" ");
            
        }
        printf("\n");
        
    }
    
    return 0;
}