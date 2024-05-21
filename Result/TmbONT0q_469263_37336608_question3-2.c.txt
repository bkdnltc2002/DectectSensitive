/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: nVXFhwU2bg1M
    ID: FyoqfBtGYV8t
    Compiler used: XOrhO1YY8sJi
    Created  date: zo5hI9I9OOIT
    References: Mt96p4q1nHo0
*/
#include <stdio.h>

int main ()
{
    //Declare variable
    int row; 

    //Enter an integer between 1 and 10 inclusive
    do
    {
        printf("Enter a number (1 - 10): ");
        scanf("%d", &row);
    } while (row < 1 || row > 10);

    //Print out the pattern
    for (int i = row; i > 0; i--)
    {
        //Print first 2 white space except last row
        if (i != 1)
        {
            printf("  ");
        }

        //Print out the block of white space
        for (int j = i - 2; j > 0 ; j--)
        {
            printf("   ");
        }

        //Print out the squence of number in ascending order including middle vertical line
        for (int k = i; k <= row; k++)
        {
            if (k == 1)
            {
                printf("%2d", k);
            }
            else
            {
                printf("%3d", k);
            }
        }

        //Print out the squence of number in decending order
        for (int l = row - 1; l >= i ; l--)
        {
            //Remove all number inside the right triangle
            if ((i < row - 1) && (i > 1) && (l > i))
            {
                printf("   ");
            }
            else
            {
                printf("%3d", l);
            }
        }
        printf("\n"); // Move to a next row
    }
    return 0;   
}