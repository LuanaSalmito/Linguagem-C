#include <stdio.h>

int main(){
    //variaveis

    int soma;

    int lista[5];
    lista[0]=1;
    lista[1]=0;
    lista[2]=5;
    lista[3]=-2;
    lista[4]=-5;
    lista[5]=7;

    //soma posições e imprime

    soma = lista[0]+lista[1]+lista[5];
    printf("A soma das posições indicadas é:%d.\n", soma);

    //modifica numero 

    lista[4]=100;

    for (int i = 0; i <= 5; i++)
    {
        printf("\n%d", lista[i]);
    }

    return 0;
    
}