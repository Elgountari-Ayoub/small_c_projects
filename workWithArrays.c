#include <stdio.h>
#include <string.h>
#include <stdbool.h>


static int arrSize;

bool switchNumbers(int *num1, int *num2)
{
    printf("SS *num1 = %d\t*num2 = %d\n", *num1, *num2);
    printf("SS &num1 = %d\t&num2 = %d\n", &num1, &num2);
    printf("SS num1 = %d\tnum2 = %d\n", num1, num2);
    int temp = *num1;
    *num1 = *num2;    *num2 = temp;

    printf("\n\n");
    printf("SS *num1 = %d\t*num2 = %d\n", *num1, *num2);
    printf("SS &num1 = %d\t&num2 = %d\n", &num1, &num2);
    printf("SS num1 = %d\tnum2 = %d\n", num1, num2);
}

bool sortAsc (int arr[])
{
    if(arrSize <= 0) return;
    for (int i = 0; i < arrSize; i++)
    {
        int min = arr[i];
        int minIndex = i;
        for (int j = i+1; j < arrSize; j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                minIndex = j;
            }
        }
        switchNumbers(&arr[i], &arr[minIndex]);
    }
}

bool sortDesc(int arr[])
{
    if(arrSize <= 0) return;
    for (int i = 0; i < arrSize; i++)
    {
        int max = arr[i];
        int maxIndex = i;
        for (int j = i+1; j < arrSize; j++)
        {
            if(arr[j]>max)
            {
                max = arr[j];
                maxIndex = j;
            }
        }
        /*
        int temp;
        temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
        */

        switchNumbers(&arr[i], &arr[maxIndex]);
    }
}
int min(int arr[])
{
    if(arrSize <= 0) return;

    int minNumber = arr[0];
    for(int i = 1; i < arrSize; i++)
    {
        if(minNumber < arr[i])
        {
            minNumber = arr[i];
        }
    }
    return minNumber;
}
int main()
{
    int num1 = 10, num2 = 20;
    printf("num1 = %d\tnum2 = %d\n", num1, num2);
    switchNumbers(&num1, &num2);
    printf("num1 = %d\tnum2 = %d\n", num1, num2);
    getch();



    printf("Enter the array length: ");
    scanf("%d", &arrSize);

    printf("\n\n");
    int arr[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        printf("arr[%d] =", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < arrSize; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    sortDesc(arr);

    printf("\n\n");

        for (int i = 0; i < arrSize; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
