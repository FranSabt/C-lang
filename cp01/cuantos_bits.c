#include <stdio.h>
#include <math.h>

int main() 
{
    double n, result;

    printf("Ingrese el numero: ");
    scanf("%lf", &n);

    result = log2(n) + 1;

    printf("Se necesitan %0.1lf bits\n", result);
    return 0;
}

/*
comando para compilar con libreria math.h

gcc -x c cuantos_bits.c -lm 
*/