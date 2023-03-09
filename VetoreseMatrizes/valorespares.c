#include <stdio.h>

int main(){

    //Vetor com 10 posições, o programa lê e mosta os pares que estão no vetor.

    int vetor[10], contador=0, pares=0;

    
    printf("Coloque os numeros:\n");

    for (int i = 0; i < 10; i++)
    {
        
        scanf("%d", &vetor[i]);
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i]%2==0)
        {
            contador=contador+1;
        
        }
        
    }
    printf("\nO total de pares é de %d", contador);


    return 0;
}