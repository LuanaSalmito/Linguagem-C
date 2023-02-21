#include <stdio.h>

int main(){

    int numero;

    scanf("%d", &numero);

    if (numero%2 == 0){

        printf("Positivo!");
    }
    else{
        printf("Negativo!");
    }


    return 0;
}