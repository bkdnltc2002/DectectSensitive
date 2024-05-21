/*
  
  Course: yGxhAScpBbla
  Semester: DEsaEdBEdlwR
  Lab Assessment: yUcn4p1p7e9n
  Author: 0MlbRxLrGACx
  ID: 9F2ndpvbjvzm
  Compiler used: zN5XyhidVF9f
  Created  date: EwHuCz0ykI5S
  Acknowledgement: None
*/

#include <stdio.h>

int main () {

    int num1, sum = 0;
    printf("Enter an even integer: ");
    scanf("%d", &num1);

    /* Checking even/odd */
    if (num1 % 2 == 0) {
        int i;
        for (i = 0; i * 2 <= num1; i++) {
            sum = sum + (i * 2) ; //Claculation
        }
        printf("Sum of all even values from 0 to %d is: %d", num1, sum);
    } else {
        printf("It is not an interger.");
    }

    return 0;
}