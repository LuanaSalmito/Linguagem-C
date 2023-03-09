#include <stdio.h>

int main(){

    int numeros[5];
    numeros[0]=1;
    numeros[1]=3;
    numeros[2]=5;
    numeros[3]=7;
    numeros[4]=9;
    //Determinação feita manualmente dos valores das variáveis.

    //depois, foi feito um loop o qual adicionará nos elementos de valores[5], a metade dos elementos correspondentes de numeros[5].

    float valores[5];

    for (int i = 0; i < 5; i++)
    {
        valores[i]=(float)numeros[i]-(float)2;
        //lembrar que o numeros [] é do tipo int, então para usar junto de um float precisa haver a transformação.
    }
    
    
    //agora um loop que imprime na ordem contrária.
    // i=4 (parâmentro incial)
    //i >=0 (parâmetro de parada, ou seja, quando o numero for maior ou iguala zero, o programa encerra.)
    //i-- (Decremento de 1 a cada rodada do loop)

    for (int i = 4; i >=0; i--)
    {
        printf("%.2f\n");
    }
    


    return 0;
    
}