#include <stdio.h>

int main(){

    float diastrabalhados, total, total_liquido;
    float desconto = 0.08;
    float valorpordia = 30.00;

    scanf("%f", &diastrabalhados);

    total= (diastrabalhados * valorpordia);

    total_liquido = total - (total*desconto);

    printf("%f", total_liquido);


    return 0;
}