#include <stdio.h>

int main(){

    float laboratorio,avsemestral,examefinal;
    float mediaporpesos;

    printf("Digite as notas respecivas à atividade de laboratorio, av semestral e exame final:"); 
    scanf("%f %f %f", &laboratorio ,&avsemestral ,&examefinal);

    mediaporpesos=((laboratorio*2)+(avsemestral*3)+(examefinal*5))/10;

    if(mediaporpesos<3){

        printf("Reprovado! Sua média foi %.1f. \n", mediaporpesos);

    }
    else if(mediaporpesos > 3 && mediaporpesos < 5){

        printf("Recuperação. Sua média foi %.1f. \n", mediaporpesos);
    }
    else{


        printf("Aprovado, parabéns! Sua média foi %.1f. \n", mediaporpesos);

    }
   

    return 0;
}