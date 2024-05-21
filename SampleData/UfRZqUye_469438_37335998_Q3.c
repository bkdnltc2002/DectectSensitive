/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: GhlDiNOoJ1YJ
    ID: z3KjQTITFPeE
    Compiler used: rM79xorQ5WyH
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/
#include<stdio.h>

int main () {
    //Enter first line
    int num;
    if (num <=1 || num >=10) {
    printf("Enter a number (1-10): ");
    scanf("%d", &num);
    } else printf("Unvaild number");
    
    //Enter matrix and column
    for (int integer = 1; integer<=num; integer++ ) {
        printf("%3d");
        for (int integer = num-1; integer>=1; num--) {
            printf("%3d");
        }
            for (int column = 1; column <=num ; column++) {
            printf("%2d");
            }
    }
    return 0;
}

