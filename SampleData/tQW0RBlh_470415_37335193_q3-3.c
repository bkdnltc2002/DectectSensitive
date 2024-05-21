#include <stdio.h>

/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: JIDZpDNFgQMF
    ID: fJkCn4QmxEGp
    Compiler used: zN5XyhidVF9f
    Created date: 29/03/2023
    References: g6uSn07TTrtx
*/

int main() {
    // Ask user for a number between 1 and 10 inclusive
    int num;
    printf("Enter a number (1 - 10): ");
    scanf("%d", &num);

    // Loop for each row
    for (int row = 1; row <= num; row++) {
        // if the number column is bigger or equal to the user input number - row + 1 (this determines shape/orientation of pyramid)
        // -> print column number (padded with 4 spaces), else print an equal amount of space
        for (int col = 1; col <= num; col++) {
            if (col >= num - row + 1) {
                printf("%4d", col);
            } else {
                printf("    ");
            }
        }

        // after printing the left side, move onto the right
        for (int right_col = 1; right_col < num; right_col++) {            
            // if new column number + 1 == row (to skip the first line),
            // print user number - new column number (reverse the order)
            if (right_col + 1 == row) {
                printf("%4d", num - right_col);
            } else if (row == num) {
                // if at the last line, print the number corresponding
                // to its new column number as above
                printf("%4d", num - right_col);
            } else {
                // if no conditions are satisfied, print an equal amount of space (4)
                printf("    ");
            }
        }
        printf("\n");
    }



    return 0;
}