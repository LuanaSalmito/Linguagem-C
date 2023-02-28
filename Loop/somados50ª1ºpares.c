#include <stdio.h>

int main(){

    int soma=0;
    int contador=0;

    while (contador<50)
    {
        contador=contador+1;

        soma+=contador*2;
    }

    printf("%d\n", contador);

    printf("%d", soma);


    return 0;
}

