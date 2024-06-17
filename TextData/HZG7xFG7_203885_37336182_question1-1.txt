/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: 4uElJX9igOaG   
    ID: MaLAPBsQcKTR
    Compiler used: zN5XyhidVF9f
    Created  date: EwHuCz0ykI5S
    References: g6uSn07TTrtx
*/
#include <stdio.h>
#include <math.h>

int main () {

    float a, b, c;

    printf("Enter three float numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("A number is the sum of the others: ");
    if (a == b + c) {
        printf("YES \n");
    }   else if (b == a + c) {
            printf("YES \n");
    }   else if (c == a + b) {
            printf("YES \n");
    }   else {
            printf("NO \n");
    }

    return 0;
}