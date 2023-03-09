#include <stdio.h>

int main(){

    char sexo[10];
    float altura, pesoideal=0;

    printf("Qual é o seu sexo?\n");
    gets(sexo);
    printf("Qual é oa sua altura?\n");
    scanf("%f", &altura);

    switch (sexo[0])
    {
    case 'm':
        pesoideal=(62.1*altura)-44.7;
        printf("Seu peso ideal é %.2f.", pesoideal);
        break;
    
    case 'h':
        pesoideal= (72.7*altura)-58;
        printf("Seu peso ideal é %.2f.", pesoideal);
        break;

    default:
        break;
    }


    return 0;

}