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
#include <math.h>

int main()
{

    //Declare variable
    float num1, num2, num3;

    //Enter three float numbers (Assume number only had 1 decimal place)
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    //Check if among them, a number is the sum of other two numbers
   
    printf("A number is the sum of the others: ");
    if ((num1 == num2 + num3) || (num2 == num1 + num3) || (num3 == num1 + num2))
    {
        printf("YES\n"); //If 1 number is the sum of other two numbers --> print YES
    }
    else
    {
        printf("NO\n"); //If all 3 number is not the sum of other two numbers --> print NO
    }
    return 0;
}