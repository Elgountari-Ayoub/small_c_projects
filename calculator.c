#include <stdio.h>
#include <math.h>


double Add(double num1, double num2)
{
    return num1 + num2;
}
double Sub(double num1, double num2)
{
    return num1 - num2;
}
double Mult(double num1, double num2)
{
    return num1 * num2;
}
double Div(double num1, double num2)
{
    if(num2 != 0.0)
    {
        return num1/num2;

    }
}

void DisplayRes(double res)
{
    printf("The result is %lf\n", res);
}



int main ()
{
    double firstNumber;
    double secondNumber;
    char op;
    double res;
    CALC:

        printf("\t\t\tBasic Calculator\n\n");

        printf("Operations:\n");

        printf("+ Addition\n");
        printf("- Subtraction\n");
        printf("* Multiplication\n");
        printf("/ Division\n");

        printf("Enter the operation like \n1stNumber op 2ndNumber\n");
        scanf("%lf %c %lf", &firstNumber, &op, &secondNumber);

        //printf("%lf %c %lf \n", firstNumber, op, secondNumber);

        switch(op)
        {
        case '+' :
            res = Add(firstNumber, secondNumber);
            DisplayRes(res);
            break;
        case '-' :
            res = Sub(firstNumber, secondNumber);
            DisplayRes(res);
            break;
        case '*' :
            res = Mult(firstNumber, secondNumber);
            DisplayRes(res);
            break;
        case '/' :
            if(secondNumber == 0)
            {
                printf("division by zero exeption \n");
                break;
            }
            res = Div(firstNumber, secondNumber);
            DisplayRes(res);
            break;        default:
            printf("Invalid choice\n");
            break;
        }

        char _try;
        printf("Try again(Y/N)?\n=> ");
        getchar();
        scanf("%c", &_try);

        if(_try == 'y' || _try == 'Y')
        {
            system("cls");
            goto CALC;
        }
        return 0;

}
