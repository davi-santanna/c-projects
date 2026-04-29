#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x;
    scanf("%d", &x);

    double numerador = 2;
    double denominador = 1;
    double exponencial = 4;
    double multiplo;   
    double total; 

    for (int h=1; h<=50; h++){
        multiplo = pow(x, exponencial);
        total += numerador/(denominador*multiplo);
        numerador = numerador * 2;
        denominador += 2;
        exponencial++;
    }
    printf("%f", total);
    return 0;
}
