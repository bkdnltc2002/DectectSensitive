/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: hKxBAZryQ1Dh
    ID: 5UDmUFrR2PQa
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main(){

    // Generate three float variables for three numbers
    float num1, num2, num3;
    // Let user input the numbers
    printf("Enter three float numbers: "); 
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("A number is the sum of the others: ");

    // Create an if statement to check if those numbers satisfy the conditions nad print out the result
    if(num1 == num2 + num3)
    {
        printf("YES");
    }
    else if(num2 == num1 + num3)
    {
        printf("YES");
    }
    else if (num3 == num1 + num2)
    {
        printf("YES");
    } 
    else 
    {
        printf("NO");
    }

return 0;
}