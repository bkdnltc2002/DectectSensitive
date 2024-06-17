/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: OtcKISZWUZ8A
    ID: KC8vOO4jhc8h
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main(void){

    //Input three float number
    float a, b, c;
    printf("Enter three float number: ");
    scanf("%f %f %f", &a, &b, &c);

    //Print out the result
    printf("A number is the sum of the others: ");

    if ((a + b == c) || (a + c == b) || (c + b == a)){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
    
}