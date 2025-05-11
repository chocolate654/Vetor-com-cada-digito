#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
       srand(time(NULL));
    int indice_aleatorio=rand()%100000;
    printf("%d{",indice_aleatorio);
    int numero=indice_aleatorio;
    for(int i=100000;i>=1;i/=10){
        int digito=(numero/i)%10;
        printf("%d",digito);
        printf(",");
    }
    printf("}\n");
    return 0;
}
