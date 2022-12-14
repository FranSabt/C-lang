# include <stdio.h>
# define circle(r) r * r * 3.14
# define triangle(b, h)  (b * h)/ 2

void cirle_area();
void triangle_area();

int main()
{
    int shape;
    start:
    printf("Press '1' for circle and '2' for triange");
    scanf("%i", &shape);

    if(shape == 1)
        {
            cirle_area();
        }
    else if (shape == 2)
        {
            triangle_area();
        }
    else
        {
            printf("Bad input\n");
            goto start;
        }
    printf("Bye!!!\n");
    return 0;
}

void cirle_area()
    {
        float r;
        printf("Radius of the circle: ");
        scanf("%f", &r);
        float area = circle(r);
        printf("The ares is: %0.2f\n", area);
    }

void triangle_area()
    {
        float d;
        float h;
        printf("Base of the triangle: ");
        scanf("%f", &d);
        printf("Hight the triangle: ");
        scanf("%f", &h);
        float area = triangle(d, h);
        printf("The ares is: %0.2f\n", area);
    }