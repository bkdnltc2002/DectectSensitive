/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: K4H2fTNK8CK8
    ID: 2ys1WLLUGdUv
    Compiler used: zN5XyhidVF9f
    Created  date: EwHuCz0ykI5S
    References: g6uSn07TTrtx
*/
#include <stdio.h>
int main(){
    float num1, num2, num3;
    char result;
    printf("Enter three float numbers:");
    scanf("%f %f %f", &num1, &num2, &num3);
    if (num1 + num2 == num3){
        printf("A number is the sum of the others: YES");
    }
    else if (num1 + num3 == num2){
        printf("A number is the sum of the others: YES");
    }
    else if (num3 + num2 == num1){
        printf("A number is the sum of the others: YES");
    }
    else {
        printf("A number is the sum of the others: NO");
    }
    return 0;
}