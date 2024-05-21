/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: isSaHu2ed9IV
    ID: O4qtjJsqs4yP
    Compiler used: J1EzQMFiIkL2
    Created  date: JdtgbsuWhNNg
    References: shXjlAQ6oOtS
*/
#include <stdio.h>

int main() {

    int num;
    printf("Please type in number (1-10)");
    scanf("%d", &num);
    
    //Print out the pyramid
    for (int row = 1; row <= num; row++) {
        /* for each row */
        //Print out blocks of white spaces
        for (int block = 1; block <= num - row; block++) {
            printf("    ");
        }
        
        //Print out numbers in descending order
        for (int col = num - row +1; col >= 1; col--) {
            printf("%2d  ", col);
        }
        
        //Print out numbers in ascending order    
        for (int col = 2; col <= row; col++) {
            printf("%2d  ", col);
        }
        
        printf("\n"); //newline to go to next row
    }
    
    return 0;
}