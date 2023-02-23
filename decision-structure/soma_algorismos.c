#include <stdio.h>

int main(){

    int entrada;
    int contador = 0;

    scanf("%d", &entrada);

    int temp=entrada;

    int fixa = entrada;
    int soma = 0;

    while(temp>0){
        soma = soma + (temp % 10);
        temp = temp / 10;
        contador++;
    }

    printf("%d", soma);
    return 0;
}