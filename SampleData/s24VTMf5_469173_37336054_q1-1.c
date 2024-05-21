/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: icoZOaesdVGz
    ID: jyQoIGy1yCLu
    Compiler used: rM79xorQ5WyH
    Created  date: EwHuCz0ykI5S
    References: 3Tgx5jqU34Tj
*/
#include <stdio.h>
int main()
{
    float a, b, c, sum;
    printf("Enter three float numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    printf(" A number is the sum of the others: ");
        sum = b + c; 
        if (a == sum) 
        {
            printf("YES");
        } 
        else 
        {
            sum = a + c;
            if (b == sum)
            {
            printf("YES");
            } 
            else
        {
            sum = a + b;
            if (c == sum)
            {
            printf ("YES");
            } 
            else printf("NO");
        }
        }
    return 0;
}