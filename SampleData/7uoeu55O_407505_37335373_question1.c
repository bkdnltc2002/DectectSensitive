/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: 3zwDDhkBgfdW
    ID: v862gvPoUbMp
    Compiler used: 20zmVn0LRwmo
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main(){

    float num1, num2, num3;
    //Get input
    printf("Enter three float number:");
    scanf("%f %f %f", &num1, &num2, &num3);

    //Display the result
    printf("A number is the sum of other number: ");

    //Logic for calculation: Print YES if a number is the sum of others, else print NO
    if (num1 == num2 + num3) {
        printf("YES\n");
    } else if (num2 == num1 + num3) {
        printf("YES\n");
    } else if (num3 == num2 + num1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}