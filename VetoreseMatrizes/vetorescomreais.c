#include <stdio.h>

int main(){

    //arrays;
    int i;
    float numeros[10],valores[10];
    
    printf("Digite os numeros para a operação: \n");
    //loop para armazenar no array numeros[];
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &numeros[i]);
        valores[i] = numeros[i]*numeros[i];
        printf("Número inicial na posição [%d]: %.2f\n", i, numeros[i]);
        printf("Quadrado do número na posição [%d]: %.2f\n\n", i, valores[i]);
    }
    
    

    
   
    return 0;
    
}