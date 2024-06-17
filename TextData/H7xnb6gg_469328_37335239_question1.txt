/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: s41ea0l2nSc2
    ID: D9tQHI4mq5c8
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: Mt96p4q1nHo0
*/

#include <stdio.h>

int main() {
    float num1, num2, num3;

    //Get user inputs for number 1, 2 and 3.
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("A number is the sum of the others: ");

    //Check if all combinations of two numbers are equal to the other number.
    if (num1 + num2 == num3) {
        printf("YES");
    } else if (num1 + num3 == num2) {
        printf("YES");
    } else if (num2 + num3 == num1) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}