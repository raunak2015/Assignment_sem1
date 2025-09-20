#include <stdio.h>
int main()
{
    int n = 4, a = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%c ", a + 64);
            a++;
        }
        printf("\n");
    }

    return 0;
}