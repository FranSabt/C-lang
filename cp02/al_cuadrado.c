# include <stdio.h>

float al_cuadrado(float n) // debo delcarar los timpos dentro de los parametros
{
    float res = n * n;
    return res;
}

int main ()
{
    float num;
    float res;
    printf("dame un numero: ");
    scanf("%f", &num);
    res = al_cuadrado(num);
    printf("El resultado es %0.1f\n", res);
    return 0;
}