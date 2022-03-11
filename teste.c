#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *n, *n1;
    int i, t=0, r=0;

    n = (int*) malloc(t*sizeof(int));
    printf("Digite -1 para sair: \n");

    while(r>=0)
    {
        scanf("%d",&r);
        if(r<0)
        {
            break;
        }
        n[t] = r;
        t++;
        n = (int*)realloc(n,(t+1)*sizeof(int));
    }
    printf("\n---------------\n");
    
    n1 = (int*) malloc((t+1)*sizeof(int));
    
    for(i=0;i<t;i++)
    {
    	n1[i] = n[i]*3;
        printf("%d\n",n1[i]);
    }

    printf("---------------\n");

    return 0;
}
