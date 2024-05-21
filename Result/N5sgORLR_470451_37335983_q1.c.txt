/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: qET0euGgeEuW
    ID: myJyDRWAxZID
    Compiler used: ZL3ae3Kb5lov
    Created  date: EwHuCz0ykI5S
    References: g6uSn07TTrtx
*/
#include <stdio.h>

int main() {
float num1, num2, num3;

// Prompt user to enter three float numbers
printf("Enter three float numbers: ");
scanf("%f %f %f", &num1, &num2, &num3);

// Check if any number is the sum of the other two
if (num1 == num2 + num3 || num2 == num1 + num3 || num3 == num1 + num2) {
printf("YES\n");
} else {
printf("NO\n");
}

return 0;
}