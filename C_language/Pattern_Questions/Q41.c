#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (n * 2) - 1; k++)
        {
            if (k == 1 || i == 1 || k + i == (n * 2 - i) + 1)
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