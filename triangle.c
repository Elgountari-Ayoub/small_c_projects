
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void drawEquilateralTriangle(int rows, int triangleNumber)
{
    if(triangleNumber <= 0 || rows <= 0)
    {
        return;
    }
    for (int row = 0; row < rows; row++)
    {
        for (int spaces = rows + triangleNumber; spaces > row; spaces--)
        {
            printf(" ");
        }
        for (int col = 0; col <= row; col++)
        {
            printf("+ ");
        }
        printf("\n");
    }
    drawEquilateralTriangle(rows+1, triangleNumber-1);
}
int  main()
{
    int triangledNumber, triangleRowsNumber;
    printf("Enter the number of triangles: ");
    scanf("%d", &triangledNumber);
    printf("Enter the number of rows: ");
    scanf("%d", &triangleRowsNumber);
    drawEquilateralTriangle(triangleRowsNumber, triangledNumber);
    getch();
    return 0;
}





