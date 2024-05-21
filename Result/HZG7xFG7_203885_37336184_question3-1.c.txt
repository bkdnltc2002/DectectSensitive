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

    int num;
    printf("Enter a number (1-10): ");
    scanf("%d", &num);

    for (int row = num; row >= 1; row--) {

        for (int white = 1; white <= row - 1; white++) {
            printf("   ");
        }

        for (int left = row; left <= num; left++) {
            printf("%2d ", left);
        }
        
        for (int black = 1;  black <= num - row; black++) {
            printf("  ");
        }

        printf("%2d\n", row);
    }

    return 0;
}