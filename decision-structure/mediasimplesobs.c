#include <stdio.h>

// Aqui os inputs serão duas notas. Se a nota está entre 0,00 e 10,00, será válida, caso contrário, será inválida. Sendo válida, o calculo da média será efetuado.


int main(){

    float nota1, nota2,media;

    scanf("%f %f", &nota1, &nota2);

    if (nota1 > 0 && nota1 <= 10){
        if (nota2 > 0 && nota2 <=10);

        media= (nota1+nota2)/2;

        printf("%f", media);

    }
    else{

        printf("Nota inválida");


    }
    






    

    


    return 0;
}