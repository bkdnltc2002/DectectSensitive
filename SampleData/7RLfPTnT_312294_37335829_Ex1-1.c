
/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: OD5Fbxa7YNvt
    ID: VtPldBs4cEjO
    Compiler used: J1EzQMFiIkL2
    Created  date: cFP9XKDbUANg
    References: shXjlAQ6oOtS
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1;
    double num2;
    double num3;
    char char1 = YES;
    char char2 = NO; 

    printf("Enter the three double numbers: ");
    scanf("%lf\n, %lf\n, %lf\n", &num1, &num2, &num3);

    double sumNum;
    sumNum = num1 + num2 + num3;
    char1;
    char2;
    printf("The sum of three numbers are: %lf\n", sumNum);
    
    if(num1 + num2 == sumNum){
        printf("\nA number is the sum of the other: %c\n", char1);

    } else if(num1 + num3 == sumNum){
        printf("\nA number is the sum of the other: %c\n", char1);

    } else if(num2 + num3 == sumNum){
        printf("\nA number is the sum of the other: %c\n", char1);

    } else{
        printf("The num is not the sum of other:b %c\n", char2);

    }


}