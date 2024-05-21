/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: Q7UIAp2XrABB
    ID: W8kdRVgMJ392
    Compiler used: J1EzQMFiIkL2
    Created  date: EwHuCz0ykI5S
    References: shXjlAQ6oOtS
*/ 

#include <stdio.h> 

int main () 
{ 
    float num1, num2, num3; 
    printf ("enter three float numbers: ");
    scanf ("%f %f %f", &num1, &num2, &num3); 
    if (num1 + num2 == num3) 
    {
        printf ("A number is the sum of the others: Yes "); 
    }  
    else if (num3 + num1 == num2) 
    {
        printf ("A number is the sum of the others: Yes"); 
    }
    else if (num2 + num3 == num1) 
    {
        printf ("A number is the sum of the others: Yes"); 
    }
    else 
    {
        printf ("A number is not the sum of others: No");
    } 
    return 0;
}