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

int main()
{

    //Declare variable
    int integer, sum;

    //Keep asking for the odd number (to break a loop)
   while (1) 
   {
        //Enter the even integer (Assume integer > 0)
        printf("Enter an even integer: ");
        scanf("%d", &integer);

        if (integer % 2 == 0)//Check for even number
        {
            //Calculate the sum of all even value from 0 to integer and print it out
            sum = 0; //Reset sum to 0 for each loop
            for (int i = 0; i <= integer; i++)
            {
                if (i % 2 == 0)
                {
                    sum += i;
                }
            }
            printf("Sum of all even values from 0 to %d is: %d", integer, sum);
            printf("\n\n"); //Move next line twice.
        }
        else//For odd number
        {
            printf("It is not an even integer.\n\n");
            break; //break the while loop if it is the odd number
        }
    }
    return 0;
}