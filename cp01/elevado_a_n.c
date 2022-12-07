# include <stdio.h>
# include <math.h>

int main()
{
    int n;

    printf("Ingrese numero: ");
    scanf("%i", &n);

    int n2 = pow(n, 2);
    int n3 = pow(n, 3);
    int n4 = pow(2, n);
    int n5 = pow(3, n);

    printf("N² = %i, N³ = %i, 2 ^ N = %i, 3 ^ N = %i\n", n2, n3, n4, n5);
    return 0;
}