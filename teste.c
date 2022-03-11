#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *n;
    int i, t = 0, r = 0;

    n = (int *)malloc(2 * sizeof(int));
    printf("Digite -1 para sair: \n");

    while (r >= 0)
    {
        scanf("%d", &r);
        if (r < 0)
        {
            break;
        }
        n[t] = r;
        t++;
        n = (int *)realloc(n, (t + 1) * sizeof(int));
    }
    printf("\n---------------\n");
    for (i = 0; i < t; i++)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}