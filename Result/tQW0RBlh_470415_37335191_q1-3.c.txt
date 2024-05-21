#include <stdio.h>

/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: JIDZpDNFgQMF
    ID: fJkCn4QmxEGp
    Compiler used: zN5XyhidVF9f
    Created date: 29/03/2023
    References: g6uSn07TTrtx
*/

int main() {
    // User input: 3 floats
    float num1, num2, num3;

    printf("Enter three float numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Check if any number is the sum of other two
    // And print the YES/NO message
    printf("A number is the sum of others: ");
    if ((num1 == num2 + num3) || (num2 == num1 + num3) || (num3 == num1 + num2)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}