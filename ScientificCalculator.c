#include<stdio.h>
#include<math.h>
#include<windows.h>
int main()
{
    double fact(double num)
    {
        int res = num;
        for (int i = num-1; i > 0; i--)
        {
            res *= i;
        }
        return res;
    }

    double num1, num2, res;
    int op;
    char tryAgin;
    START:
        system("cls");
        printf("\t\tScientific Calculator\n\n");

        printf("Operations guide: \n");

        printf("1  => Addition\n");
        printf("2  => Subtraction\n");
        printf("3  => Multiplication\n");
        printf("4  => Division\n");
        printf("5  => Division reminder\n");
        printf("6  => pow()\n");
        printf("7  => cos()\n");
        printf("8  => Sin()\n");
        printf("9  => Tan()\n");
        printf("10 => Sqrt()\n");
        printf("11 => fact()\n");
        printf("12 => exp()\n");
        printf("13 => ln()\n");
        printf("14 => log()\n");


        printf("\n=> ");
        scanf("%d", &op);

        //Require two numbers
        if(op>= 1 && op<= 6)
        {
            printf("Enter 1st number: ");
            scanf("%lf", &num1);

            printf("Enter 2nd number: ");
            scanf("%lf", &num2);
            switch(op)
            {

                case 1   :res = num1 + num2;break;
                case 2   :res = num1 - num2;break;
                case 3   :res = num1 * num2;break;
                case 4   :if(num2 == 0)
                                printf("Can't divide by 0\n");
                            else
                                res = num1 / num2;
                            break;
                case 5   :res = (int)num1 % (int)num2;break;
                case 6  :res = pow(num1, num2);break;
            }
            printf("res = %lf\n", res);
        }
        else if(op <= 14)
        {
            printf("Enter a number: ");
            scanf("%lf", &num1);

            switch(op)
            {
                case 7  :res = cos(num1);break;
                case 8  :res = sin(num1);break;
                case 9  :res = tan(num1);break;
                case 10 :res = sqrt(num1);break;
                case 11 :res = fact(num1);break;
                case 12 :res = exp(num1);break;
                case 13 :res = log(num1);break;
                case 14 :res = log10(num1);break;

            }
            printf("res = %lf\n", res);
        }


        getchar();
        printf("Try again(Y/N)?\n=> ");
        scanf("%c", &tryAgin);
        if(tryAgin == 'y' || tryAgin == 'Y')
        {
            goto START;
        }
        getch();

        return 0;
}
