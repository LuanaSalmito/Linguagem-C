#include <stdio.h>

int main(){

    float medias[15];
    float soma=0, contador=0;

    printf("Insira as notas dos alunos:\n");

    for(int i = 0; i < 15; i++)
    {
        scanf("%f", &medias[i]);
        
              
    }
    for (int i = 0; i < 15; i++)
    {
        soma=medias[i]+i;
        printf("\n%f", medias[i]);
    }
    

    
    
    



    



    return 0;
    
}