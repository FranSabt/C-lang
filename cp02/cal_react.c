# include <stdio.h>
# include "nueva_reactancia.h" // ENTRE COMILLAS!!!
/*
    No necesito compliar el archivo asi como tampoco necesita "main()" pero si cambiar la terminacion del escript de .c a .h
*/

int main () 
{
    float r;
    r = reactancia_cap(1.2, 0.37);
    printf("%f", r);
}