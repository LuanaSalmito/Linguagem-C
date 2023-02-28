#include <stdio.h>

int main(){

    int numero,i=0;
    int contador=0;

    scanf("%d", &numero);
    
    for (i = 0; i <= numero; i++){
        if (i>0 && i%2==0)
        {
            printf("%d\n", i);
        }                               
    }
    return 0;   
}
