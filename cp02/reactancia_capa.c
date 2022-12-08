# include <stdio.h>

float reactancia_cap(float capacidad, float frecuencia);

int main()
{
    float faradios;
    float herzt;
    float reactancia;

    printf("faradios? ");
    scanf("%f", &faradios);
    printf("frecuencia?");
    scanf("%f", &herzt);

    reactancia = reactancia_cap(faradios   , herzt);
    printf("Reactancia = %.3f", reactancia);
}


float reactancia_cap(float capacidad, float frecuencia)
{
    float reactancia;
    float PI = 3.14159;
    reactancia = 1 / (2 * PI * frecuencia * capacidad);

    return reactancia;
}
