#include <stdio.h>

int main(){

    //variaveis
    //varavel a ser lida pelo programa.

    int input[5];

    //Um loop para adicionar os elementos.
    for (int i = 0; i <=5; i++)
    {
        scanf("%d", &input[i]);
        

    }

    //outro loop para printar os elementos. Se fosse colocado no de cima, não iria funcionar pois o programa is imprimir simultaneamente.
    for (int i = 0; i <=5; i++)
    {
        printf("\n%d", input[i]);
    }
    
    return 0;
    
}