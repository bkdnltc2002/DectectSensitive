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
    int i, sum;
    printf("Enter an even integer: "); 
    scanf("%d", &i);
    while (i % 2 == 0)
    {
        sum = 0;
        for (int a = 1; a <= i; a++)
        {
            if (a % 2 == 0)
            {
                sum = sum + a;
            }
        }
        printf("Sum of all even values from 0 to %d is: %d\n", i, sum);
        printf("Enter an even integer: "); 
        scanf("%d", &i);
    }
    printf("It is not an even integer.");
    return 0;
}