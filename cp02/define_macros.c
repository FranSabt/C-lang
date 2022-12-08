# include <stdio.h>
# define cuadrado(x) x * x
# define PI 3.141592
# define area_circulo(r) PI * cuadrado(r)

int main()
{
    float area;
    float radio;

    printf("introduzca el radio: \n");
    scanf("%f", &radio);

    area = area_circulo(radio);

    printf("El area es %f \n", area);
}