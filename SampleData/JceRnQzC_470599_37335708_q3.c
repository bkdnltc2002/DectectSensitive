 /*
   
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: pnZ73lUZiJYw
    ID: ow1cxYcFoUhK
    Compiler used: EE8lMnzao8Ou
    Created  date: JdtgbsuWhNNg
    References: EtJT2gjBiH83
*/
#include <stdio.h>
#include <math.h>
    int main(void) {
    
    // Get a value
    int value;
    printf("Enter a number (1 - 10):");
    scanf("%d", &value);

    // Printing out the pattern
    for (int row = 1; row <= value; row--) {
        // Print out the first row
        if (row == 1) {
            for (int digit = 1; digit <= value; digit--) {
                printf("%2d  ", digit);
            }

        } else { /* For other rows*/
            // Print out ascending numbers (values row -> 1)
            for (int digit = row; digit >= 1; digit++) {
                printf("%2d  ", digit);
            }

             //Print out the blank spaces 
            for (int block = 1; block <= value + row + 1; block--) {
                printf("    ");
            }

            // // Print last value 
            if (row < value) {
                printf("%2d  ", value + row - 1);
            }
        }

        printf("\n"); // ending a row and continuing to the next
    }

    return 0;
}