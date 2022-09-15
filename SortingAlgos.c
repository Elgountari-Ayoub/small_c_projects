#include <stdio.h>
#include<stdlib.h>


void swapNumbers(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
//////////////////////////
//Selection Sort Algorithm
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i+1; j<size; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swapNumbers(&arr[minIndex], &arr[i]);
    }
}
//Insertion algorithm
void insertionSort (int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (key < arr[j] && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
//Bubble Sort Algorithm
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        //printf("step %i \n", i);
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swapNumbers(&arr[j], &arr[j+1]);
            }
            //printf("\tj = %i\t", j);
            //printArr(arr, size);
        }
    }
}

void printArr (int arr[], int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if(i == size -1) break;
        printf(", ");
    }
    printf("]\n");
}

//fill an array
void fillArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("(%i) =>", i+1);
        scanf("%d", &arr[i]);
    }
}
int main ()
{

    //An example to test the sort functions
    unsigned int size;

    printf("Enter the number of the elements you want to sort: ");
    scanf("%d", &size);

    int data[size];

    //Fill the array
    fillArr(data, size);

    selectionSort(data, size);
    //insertionSort(data, size);
    //bubbleSort(data, size);

    printf("Sorted Array in Ascending Order:\n");
    printArr(data, size);

    return 0;
}
