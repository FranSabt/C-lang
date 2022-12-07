# include <stdio.h>

int main()
{
    float voltaje;
    float intensidad;
    float resistencia;

    printf("Introduzca la intensidad en amperios: ");
    scanf("%f", &intensidad);
    printf("Introduzca la resistencia en ohmnios: ");
    scanf("%f", &resistencia);
    voltaje = intensidad * resistencia ;
    printf("El voltaje es %0.3f \n", voltaje); // Si la información es procesada por el programa no necesito pointers
    return 0;
}