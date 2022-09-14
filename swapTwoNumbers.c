//Program description : swap two numbers without using 3rd temp vatiable;
//Author              : Elyoub from YouCode Safi School;
//Date                : 14/sept/2022


#include<stdio.h>
void swap(double *a, double *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main ()
{
    double a, b;
    printf("Enter 1st number: ");
    scanf("%lf", &a);

    printf("Enter 2nd number: ");
    scanf("%lf", &b);

    printf("Before the swap\n");
    printf("1st number = %1.2f\n", a);
    printf("2nd number = %1.2f\n", b);

    swap(&a, &b);

    printf("After the swap\n");
    printf("1st number = %1.2f\n", a);
    printf("2nd number = %1.2f\n", b);

    getch();
}
