/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: BAfm1bRmPCpj
    ID: VX2MfBIX4D7y
    Compiler used: 20zmVn0LRwmo
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (1 - 10): ");
    scanf("%d", &num);

    for (int row = 1; row <= num; row++) {
        // Print left side blocks of whitespace
        for (int space = num - row - 1; space >= 0; space--) {
            printf("   ");
        }

        // Print numbers from left to center in ascending value
        for (int left_col = num - row + 1; left_col <= num; left_col++) {
            printf("%2d ", left_col);
        }

        // Check if appropriate, then print right side blocks of whitespace
        if (row > 2 && row <= num - 1) {
            for (int space = 2; space < row; space++) {
                    printf("   ");
                }
        }

        // Print the right-most numbers in descending value
        for (int right_col = num - row + 1; right_col >= num - row + 1; right_col--) {
            
            // Check if it's the first row, then exit out loop to prevent duplicate number on the first row
            if (row == 1) {
                break;
            } 

            // Check if it's the last row, then print out numbers in descending value
            if (row == num) {
                for (int bot_col = num - 1; bot_col >= 1; bot_col--) {
                    printf("%2d ", bot_col);
                }
                break;
            }

            printf("%2d", right_col);
        }

        printf("\n");
    }
    return 0;
}