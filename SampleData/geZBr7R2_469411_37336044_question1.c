/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: oXY0olyuH1fy
    ID: dyWhDeFXG6U8
    Compiler used: 9nMM81R3yyyo
    Created  date: JdtgbsuWhNNg
    References: 1PBEEfR7yj2G
*/
#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3;

    printf("Enter three float numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if ((num1 + num2 == num3)|| (num1 + num3 == num2)|| (num2 + num3 == num1)){
        printf("Yes \n");
    } else {
        printf("No \n");
    }
return 0;
}    