#include <stdio.h>

int main(){
    float salario,total;
    float desconto = 0.12;

    scanf("%f", &salario);

    total = salario - (salario*desconto);

    printf("%f", total);

    


    return 0;
}