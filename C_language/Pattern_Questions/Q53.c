#include <stdio.h>
int main()
{
    int n = 4;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}