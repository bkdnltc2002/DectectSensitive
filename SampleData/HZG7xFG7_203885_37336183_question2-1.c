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

int main() {

    int sum, num;
    
    printf("Enter an even integer: ");
    scanf("%d", &num);

    while (num % 2 == 0) { 

        sum = 0;
        for (int i = 0; i <= num; i += 2) {
            sum = sum + i;
        }
        printf ("Sum of all even values from 0 to %d is: %d\n", num, sum);
        printf("Enter an even integer: ");
        scanf("%d", &num);
        
        }
    

    if (num % 2 == 1) {
        printf("It is not an even integer.\n");
    }

    return 0;
}