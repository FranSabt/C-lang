# include <stdio.h>

float precio_total(int d, int consultas, int medicinas);

int main()
{
    int dias;
    int precio_consultas;
    int precio_medicinas;
    int costes_diversos = 150;
    int seguro = 2;

    printf("Ingrese el numero de dias: \n");
    scanf("%i", &dias);
    printf("Ingrese el precio de las consultas\n");
    scanf("%i", &precio_consultas);
    printf("Ingrese el coste de las medicinas\n");
    scanf("%i", &precio_medicinas);

    float total = precio_total(dias, precio_consultas, precio_medicinas);

    float total_f = (total + costes_diversos) / seguro;

    printf("El precio total es de %0.2f, con el segura el precio final es de %0.2f \n", total, total_f);
    return 0;
}

float precio_total(int d, int consultas, int medicinas)
{
    float total = (d * consultas) + medicinas;
    return total;
}