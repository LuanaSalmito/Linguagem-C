#include <stdio.h>

// Será lido um salário e o valor de uma prestação de empréstimo, e se a prestação for maior que 20% do salário, o emprestimo não será concedido. 

int main(){

    float salario,prestação,confere;

    scanf("%f %f", &salario, &prestação);

    confere=salario*0.20;

    if (prestação>confere){

        printf("Empréstimo não concedido");

    }
    else{
        printf("Empréstimo cedido");
    }




    return 0;
}