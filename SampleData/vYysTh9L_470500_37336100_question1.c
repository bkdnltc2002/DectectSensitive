/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: isSaHu2ed9IV
    ID: O4qtjJsqs4yP
    Compiler used: J1EzQMFiIkL2
    Created  date: JdtgbsuWhNNg
    References: shXjlAQ6oOtS
*/
#include <stdio.h>

int main() {
    float num1, num2, num3;
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 + num2 == num3) {
        printf("A number is the sum of others: YES");
    } else if (num1 + num3 == num2) {
        printf("A number is the sum of others: YES");
    } else if (num2 + num3 == num1) {
        printf("A number is the sum of others: YES");
    } else
    printf("A number is the sum of others: NO");
    return 0;
}