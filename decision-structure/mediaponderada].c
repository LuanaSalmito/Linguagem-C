 #include <stdio.h>

int main(){

    int p1,p2,p3;
    int mediaponderada;
    printf("Digite as notas na sequência, prova 1, prova 2 e prova 3:");
    scanf("%d %d %d", &p1, &p2, &p3);

    mediaponderada=((p1*1)+(p2*1)+(p3*2))/4;

    if (mediaponderada>=60){

        printf("Sua média final é: %d \n", mediaponderada);

        printf("\nParabéns, você foi aprovado!");

    }
    else{

        printf("Você está reprovado.");
    }

    return 0;
}

