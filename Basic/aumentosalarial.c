#include <stdio.h>

int main(){

    float primeiro,segundo,terceiro;
    float premio = 780000;
    
    primeiro= (premio*0.46);
    segundo = (premio*0.32);
    terceiro= premio - (premio * 0.78);

    printf("%f %f %f", primeiro,segundo,terceiro);

    
    return 0;
}