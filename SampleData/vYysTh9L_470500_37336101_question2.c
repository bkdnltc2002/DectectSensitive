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

int main () {
    int num;
    printf("Enter an even integer: ");
    scanf("%d", &num);
    if (num % 2 == 1) {
        printf("This is not an even integer.");
    } else {
        int sum = 0, digit;
        do {
            digit = num - 2;
            sum = sum + digit;
            num = num - 2;
        } while (num > 0);
        printf("Sum of all even values from 0 to %d is: %d", num, sum);
    }
    return 0;
}