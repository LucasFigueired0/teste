#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *n;
    int i=0, t=0, r=0;

    n = (int*) malloc(i*sizeof(int));
    printf("Digite -1 para sair: \n");

    while(r>=0)
    {
        scanf("%d",&r);
        if(r<0)
        {
            break;
        }
        n[i] = r;
        i++;
        n = (int*)realloc(n,(i+1)*sizeof(int));
    }
    printf("\n---------------\n");
    t = i;
    i=0;
    while(i<t)
    {
        printf("%d\n",n[i])
        i++;
    }

    return 0;
}