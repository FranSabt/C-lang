#include <stdio.h>

int main() // con C99 es necesarion indicar el valor de retorno de la funcion "main()" para que operen los especificadores.
{
    printf("Hello World!\n");
    printf("Llevamos el %0.2f del año.\n", 92.35); // %0.2 -> primer dig (espacios previos al numero), segundo dig (cantida de decimales a usar)
    printf("\n");
    /*Declaracion de variables*/
    int mi_numero = 50;
    double PI = 3.14;
    char un_char = 'a';
    printf("Un numero %i\n", mi_numero);
    printf("Un numero real %f\n", PI);
    printf("Un caracter %c\n", un_char);
    return 0;
}