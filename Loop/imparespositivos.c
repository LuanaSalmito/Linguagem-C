#include <stdio.h>

int main(){

    int numero, i=0;

    scanf("%d", &numero);

    for (i = 0; i <= numero; i++){
        if (i%2==1)
        {
            printf("%d\n", i);
        }
        
    }
    

    return 0;
}