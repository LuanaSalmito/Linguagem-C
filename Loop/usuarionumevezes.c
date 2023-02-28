#include <stdio.h>

//Esse programa vai pegar o número a e o número b, fazer a soma de todos os pares no intervalo entre os dois, incluindo eles mesmos. E também a multiplicação dos impares no intervalo.


int main(){

    //variaveis

    int numeroa,numerob,soma=0,multi=0, i=0;
    int calculo1=0, calculo2=0;
    //entrada

    printf("Digite os dois numeros: \n");
    scanf("%d %d", &numeroa, &numerob);

    //processamento

    for (i = numeroa; i <= numerob; i++){
        if (i%2==0)
        {   calculo1=soma+i;
            printf("\n%d", soma);
        }
        
 
    }



    
    return 0;
}