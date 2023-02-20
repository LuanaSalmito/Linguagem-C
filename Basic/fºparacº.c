#include <stdio.h>

int main(){

    float celcius;
    float fahren;

    scanf("%f", &fahren);

    celcius=5.0*(fahren-32.0)/9.0;

    printf("%f", celcius);



   return 0;
}