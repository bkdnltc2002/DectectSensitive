/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: F7iiL7xhbKrk
    ID: 9ovFGMqr1pZm
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main()
{
    //Declare a variable for storing user input
    int input = 0;

    //Repeat asking user for an interger until the correct integer is entered
    do
    {
        printf("Enter a number between 1 and 10 inclusively: ");
        scanf("%d", &input);
    } while ((input < 1) || (input > 10));

    //print the triangle
    
    for(int row = 1; row <= input; row++) //Loop for row printing
    {
        //Print the left hand side 
        for(int j = 1; j <= input; j++)
        {
            if(j <= input - row)
            {
                printf("   ");
            }
            else
            {
                printf("%3d", j);
            }
            
        }

        //Print the right hand side
        //Check if it is the last row
        if(row == input)
        {
            //The last row print all numbers
            for(int j = input - 1; j >= 1; j--)
            {
                printf("%3d", j);
            }
        }
        else
        {
            for(int j = input - 1; j >= 1; j--)
            {
                if(j == input - row + 1)
                {
                    printf("%3d", j);
                }
                else
                {
                    printf("   ");
                }
            }
        }
        printf("\n");
    }
}