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
    // Generate interger variables
    int num, i;
    // Let user in put the interger
    printf("Enter an even interger: "); 
    scanf("%d", &num);

    int sum = 0; // Generate a variable for sum value
    // Generate an if statement 
    if(num % 2 == 0) // if the interger satisfy the condition
    {
        for(i = 0; i <= num; i+=2) // Generate a loop to find the sum of the even values from 0 to i
        {
            sum += i; 
        }
        printf("Sum of all even values from 0 to %d is: %d", num, sum); // Print out the result
    } else // If the interger does not satisfy the condition
    {
        printf("It is not an even interger."); // Print out the result
    }
    return 0;
}