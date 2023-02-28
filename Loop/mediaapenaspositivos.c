#include <stdio.h>

int main(){

    int numeros,i;
    int media=0;

    printf("Digite dez numeros, faremos a media da soma os numeros: \n");
    
    int contador=0;

    for (i = 0; i < 10; i++){

        scanf("%d", &numeros);

        if (numeros>0){
            contador++;
            media=media+numeros;
        }
        
        
    }


    media=media/contador;
    printf("%d",media);


    return 0;
} 

