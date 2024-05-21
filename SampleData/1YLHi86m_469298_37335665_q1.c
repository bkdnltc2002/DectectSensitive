/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: BAfm1bRmPCpj
    ID: VX2MfBIX4D7y
    Compiler used: 20zmVn0LRwmo
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/
#include <stdio.h>

int main() {
    float num1, num2, num3;
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("A number is the sum of the others: ");
    
    // Check all conditions and print appropriate result
    if (num1 + num2 == num3) {
        printf("YES");
    } else if (num1 + num3 == num2) {
        printf("YES");
    } else if (num2 + num3 == num1) {
        printf("YES");
    } else
        printf("NO");

    printf("\n");

    return 0;
}