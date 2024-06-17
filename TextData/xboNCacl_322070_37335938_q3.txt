/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: 9j7alYd1Nigo
    ID: IG63aRB31kgc
    Compiler used: J1EzQMFiIkL2
    Created  date: JdtgbsuWhNNg
    References: shXjlAQ6oOtS
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number (1-10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Invalid input. Please enter a number between 1 and 10.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        // Print spaces before the numbers
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print the first increasing sequence of numbers
        for (int j = i; j <= n; j++) {
            printf("%d ", j);
        }

        // Print the second decreasing sequence of numbers (except for the last row)
        if (i < n) {
            for (int j = n - 1; j >= i; j--) {
                printf("%d ", j);
            }
        }

        printf("\n");
    }

    return 0;
}
