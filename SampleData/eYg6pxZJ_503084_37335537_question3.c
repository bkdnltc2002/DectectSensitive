/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: XUjdTgzond53
    ID: 1pU3RxBcLYKb
    Compiler used: J1EzQMFiIkL2
    Created  date: w7O8s9hMmUof
    References: shXjlAQ6oOtS
*/
#include <stdio.h>

int main() {
    //Input a number (1-10)
    int num;
    printf("Please type in number (1-10)");
    scanf("%d", &num);
    
    for (int row = 1; row <= num; row++) {

        for (int block = 1; block <= num - row; block++) {
            printf("    ");
        }
        
        for (int col = row; col >= 1; col--) {
            printf("%2d  ", col);
        }
        
        for (int col = 1; col <= row; col++) {
            printf("%2d  ", col);
        }
        printf("\n"); 
    }
    
    return 0;
}