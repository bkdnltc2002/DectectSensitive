/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: WThhjD0kpFWD
    ID: crZwU3Pu3P52
    Compiler used: rM79xorQ5WyH
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main(void) {
       float num1, num2, num3;

       printf("Enter 3 float numbers: ");
       scanf("%f %f %f", &num1, &num2, &num3);

        if (num1 + num2 == num3) {
            printf("A number is the sum of the others: YES");
        } else if (num1 + num3 == num2) {
            printf("A number is the sum of the others: YES");
        } else if (num2 + num3 == num1) {
            printf("A number is the sum of the others: YES");
        } else {
            printf("A number is the sum of the others: NO");
        }
    return 0;
}