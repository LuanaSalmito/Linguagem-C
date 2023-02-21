#include <stdio.h>

int main(){

    int numero,raiz;

    scanf("%d", &numero);

    if (numero>0){

        raiz=numero*numero;

        printf("%d \n", raiz);

    }
    else{

        printf("Número escolhido é inválido!");

    }



    return 0;
}

