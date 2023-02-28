#include <stdio.h>

int main(){

    int numero,i=0;
    int contador=0;

    printf("Digite um inteiro, o programa vai imprimir todos os subsequentes de forma crescente:\n");
    scanf("%d", &numero);
    
    for (i = 1; i <= numero; i++)
    {
    
        printf("%d\n",i);
    }
    return 0;   
}