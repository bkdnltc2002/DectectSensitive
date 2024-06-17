/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: Bj4u1jGjGGXT
    ID: SISVrcC9ItIg
    Compiler used: qsQdnytvm5L6
    Created  date: HjG3yqpHdhaS
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main()
{   
    float a, b, c;
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b + c || b == a + c || c == a + b)
    {
        printf("A number is the sum of the others: YES\n");

    }
    else
    {
        printf("A number is the sum of the others: NO\n");
    }

    return 0;
}
