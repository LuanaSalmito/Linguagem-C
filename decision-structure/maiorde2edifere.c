#include <stdio.h>

int main(){

    int numero1,numero2,diferença;

    scanf("%d %d", &numero1, &numero2);

    if (numero1 > numero2){

        diferença = numero1 - numero2;

        printf("O maior é %d, e a diferença entre eles é de %d. \n", numero1, diferença);
    }
    else if(numero2>numero1){

        diferença = numero2 - numero1;

        printf("O maior é %d, e a diferença entre eles é de %d. \n", numero2, diferença);
    }
    else{
        printf("São iguais. \n");
    }

    




    return 0;
}