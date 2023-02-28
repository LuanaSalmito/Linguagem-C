#include <stdio.h>

int main(){

    int numeros,i;
    int media=0, contador=0;
    

    printf("digite dez numeros, faremos a media dos positivos: \n");
    
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numeros);

        if (numeros>0)
        {
            media=media+numeros;
            contador++;
        }
        
    }
    media=media/contador;
    
    printf("%d", media);


    return 0;
} 
