/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: QYG9l0IbOIJN
    ID: AvLvKP2JEC5C
    Compiler used: 20zmVn0LRwmo
    Created  date: W5yyWt48i6P7
    References: g6uSn07TTrtx
*/
#include <stdio.h>

int main(void){
    
    float a, b, c;
    
    //Input number
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("A number is the sum of the others: ");
    
    //The algorithm determining if the condition is fulfilled
    if (a + b == c || a + c == b || b + c == a){
        printf("YES");
    } else {
        printf("NO");
    }

    printf("\n");

    return 0;

}