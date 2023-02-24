#include <stdio.h>

int main(){

    float basemaior, basemenor, altura, area;

    scanf("%f %f %f", &basemaior, &basemenor, &altura);

    if (basemaior && basemenor > 0){

        area = ((basemaior+basemenor)*altura)/2;

        printf("%.2f", area);
    }
    else{

        printf("Base menor e base maior devem ser numeros maiores que 0.");
    }

    return 0;
}