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
    float num1, num2, num3;

    printf("Enter 3 numbers of any numerical value: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    /* Calculate the sum number */
    if (num1 == num2 + num3) {
        printf("A number is the sum of the others: YES\n");
    } else if (num2 == num1 + num3) {
        printf("A number is the sum of the others: YES\n");
    } else if (num3 == num1 + num2) {
        printf("A number is the sum of the others: YES\n");
    } else {
        printf("A number is the sum of the others: NO\n");
    }

    return 0;
}