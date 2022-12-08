# include <stdio.h>

int factorial(int num);

int main()
{
    int n;
    int total;
    printf("Hello Worold\n");
    printf("Introduzca un número: ");
    scanf("%i", &n);
    total  = factorial(n);
    printf("Factorial = %i\n", total);
    return 0;
}

int factorial(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else 
    {
        return num * factorial(num - 1);
    }
}
