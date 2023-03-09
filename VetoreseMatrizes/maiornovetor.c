#include <stdio.h>

int main(){

    int maior, i=0;
    int vetor[10];

    printf("Insira os números para o programa identificar qual o maior:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    maior=vetor[0];
    for (int i = 0; i < 10; i++)
    {
        if(vetor[i]>maior){
            maior=vetor[i];
        }

    }

    printf("O maior é %d.",maior);
    


    return 0;
    
}