#include <stdio.h>

int main(){

    int idade,tempodeserviço;

    printf("Consulte aqui se sua apostentadoria já pode ser solicitada. \n");
    printf("Digite sua idade e seu tempo de serviço: \n");
    scanf("%d %d", &idade, &tempodeserviço);

    if(idade>=65 || tempodeserviço>=30){

        printf("Você atendeu as condições de aposentadoria! Entre em contato para dar entrada no processo.");
    }
    else if(idade>=60 && tempodeserviço >= 25){

        printf("Você atendeu as condições de aposentadoria! Entre em contato para dar entrada no processo.");
    }
    else{
        printf("Você ainda não atendeu todas as condições de aposentadoria.");
    }

    

    return 0;
}