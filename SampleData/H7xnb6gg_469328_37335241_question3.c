/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: s41ea0l2nSc2
    ID: D9tQHI4mq5c8
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: Mt96p4q1nHo0
*/

#include <stdio.h>

int main() {
    int num;

    // Asking user to enter number at least once and check if the number is valid (from 1 - 10)
    do {
        printf("Enter a number (1-10): ");
        scanf("%d", &num);
    } while (num < 1 || num > 10);

    //Print the spaces for each row
    for (int i = 0; i < num; i++) {
        //Printspaces
        for (int j = num - 1; j > i; j--) {
            printf("   ");
        }

        // Print numbers on the right side
        for (int k = num - i; k <= num; k++) {
            printf("%d  ", k);

            // Check if we reached the middle of the pyramid and also check if its not a 1 column triangle    
            if (k == num && i != num) {
                //Looping through the num to 1
                for (int h = num - 1; h >= num - i; h--) {

                    // Check if its the bottom of the triangle and breaking right after this code is done
                    if (i == num - 1) {
                        for (int g = num -1; g >= num -i; g--) {
                            printf("%d  ", g);
                        }
                        break;

                    // Check if the current number is the same as on the other side of the triangle
                    } else if (h == num - i) {
                        printf("%d", h);

                    // If none applies then it's an empty space, print spaces
                    } else {
                        printf("   ");
                    }
                }
            }
        }

        // Going down a line after each row is done
        printf("\n");
    }

    return 0;
}