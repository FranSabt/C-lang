# include <stdio.h>

int main()
{
    int value = 00;
    {
        int value = 99;
        printf("%i\n", value);
    }

    {
        int value = 10;
        printf("%i\n", value);
    }
    printf("%i\n", value);
    printf("Habemus closure!\n");
}