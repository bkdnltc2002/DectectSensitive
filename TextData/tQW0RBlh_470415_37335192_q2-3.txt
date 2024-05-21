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
    // Keep asking for user input until odd number -> terminate with error message
    int user_input = 0;
    do {
        printf("Enter an even integer: ");
        scanf("%d", &user_input);

        // Loop through all numbers from 0 to user input number (inclusive)
        // Add all even numbers together into a sum -> output sum
        if (user_input % 2 == 0) {
            int sum = 0;
            for (int i = 0; i <= user_input; i = i + 2) {
                sum = sum + i;
            }
            printf("Sum of all even values from 0 to %d is %d\n", user_input, sum);
        }
    } while (user_input % 2 == 0);

    // When user wants to finish the program
    // -> input odd number -> print error message
    printf("This is not an even integer.");

    return 0;
}