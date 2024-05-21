/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: xIpP2gJGQWAs
    ID: f79QVvgXFWHk
    Compiler used: 9nMM81R3yyyo
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/
#include <stdio.h>
int main (){

    //take the user's input
    float num1;
    float num2;
    float num3;

    printf("Enter three float numbers: ");

    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    
    //Check if a  number is the sum of the others
    if (num1 - num2 == num3 || num1 - num2 == -num3 || num3 - num2 == num1 || num3 - num2 == num1){
        printf("A number is the sum of the others: Yes\n");
    } else {
        printf("A number is the sum of the others: No\n");
    }

    return 0;
}