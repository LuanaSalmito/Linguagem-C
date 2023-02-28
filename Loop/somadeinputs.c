#include <stdio.h>

int main(){

    int numeros,i;
    int soma=0;

    printf("Digite dez numeros, faremos a soma: \n");
    


    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numeros);
        soma=soma+numeros;
        
    }
    
    printf("%d",soma);


    return 0;
} 

