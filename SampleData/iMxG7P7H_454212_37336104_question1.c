/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: HNtmrTm8yeLN
    ID: osNWVh3Y4uLW
    Compiler used: tk4qEaIA06Uw
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>
int main()
{
    //Ask user to enter 3 float
    float num1, num2, num3;
    printf("Enter three float: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    //Check if a number is the sum of the others two numbers
    //If yes, print out: YES
    if (num1+num2==num3 || num2+num3==num1 || num1+num3==num2){
        printf("A number is the sum of the others: YES");
    }
    //If not, print out: NO
    else{
        printf("A number is the sum of the others: NO");
    }

    return 0;
}