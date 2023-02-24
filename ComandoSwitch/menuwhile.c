#include <stdio.h>

int main(){

    float op1,op2,op3,op4,a,b;
    int escolhausuario=1;

    while(escolhausuario!=0){
    printf("Qual operação deseja realizar? \n");
    printf("Digite 0, para encerrar o programa. \n");
    printf("Digite 1, para soma. \n");
    printf("Digite 2, para subtração. \n");
    printf("Digite 3, para divisão. \n");
    printf("Digite 4, para multiplicação. \n");
    scanf("%d", &escolhausuario);
    
    switch (escolhausuario)
    {
    case 0:
    printf("Bye Bye\n");
    break;

    case 1:
    printf("Quais números deseja somar?\n");
    scanf("%f %f", &a, &b);
    op1= a + b;
    printf("Resultado: %.2f\n\n", op1);
        break;
    
    case 2:
    printf("Quais números deseja subtrair?\n");
    scanf("%f %f", &a, &b);
    op2= a - b;
    printf("Resultado: %.2f\n\n", op1);
        break;
    
    case 3:
    printf("Quais números deseja dividir?\n");
    scanf("%f %f", &a, &b);
    op3= a / b;
    printf("Resultado: %.2f\n\n", op3);
        break;
    
    case 4:
    printf("Quais números deseja multiplicar?\n");
    scanf("%f %f", &a, &b);
    op4= a * b;
    printf("char escolhausuario[4]Resultado: %.2f\n\n", op4);
        break;
    
    
    default:
        printf("Número inválido\n\n");
        break;
    }
    }

    return 0;
}
