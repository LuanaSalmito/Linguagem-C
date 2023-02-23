#include <stdio.h>

int main(){

    char sexo[10];
    float altura,pesoideal;

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    printf("Informe seu sexo: ");
    scanf("%s", sexo);
    
    if(sexo[0] == 'h'){

        pesoideal= (72.7*altura)-58;

        printf("Seu peso ideal é: %.2f\n", pesoideal);
        
    }
    else{
        
        pesoideal=(62.1*altura)-44.7;

        printf("Seu peso ideal é: %.2f\n", pesoideal);

    }

    return 0;
}