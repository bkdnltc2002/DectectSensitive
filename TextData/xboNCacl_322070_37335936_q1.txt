/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: 9j7alYd1Nigo
    ID: IG63aRB31kgc
    Compiler used: J1EzQMFiIkL2
    Created  date: JdtgbsuWhNNg
    References: shXjlAQ6oOtS
*/

#include <stdio.h>


int main() {
    float num1, num2, num3;
    //Input float num
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    //Check the condition
    if (num1 == num2 + num3 || num2 == num1 + num3 || num3 == num1 + num2) {
        printf("A number is the sum of the others: YES\n");
    } else {
        printf("A number is the sum of the others: NO\n");
    }

    return 0;
}