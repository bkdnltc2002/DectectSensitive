/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: dBXh45lLFunr
    ID: FYPUkKYkIqmc
    Compiler used: 20zmVn0LRwmo
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main(void){
    // Initialize int variable
    int num;
    do {
        printf("Enter a even interger: ");
        scanf("%d", &num);

        // Check if input is even for different output
        if (num % 2 == 1){
            printf("It is not an integer \n");
            break;
        }

        // Initialize variable to check sum
        int sum = 0;

        // Add in sum for each even number from 0 to input
        for (int i = 0; i <= num;){
            sum += i;
            i += 2;
        }
        printf("Sum of all even interger values from 0 to %d is: %d \n", num, sum);
    } while (num % 2 == 0); //End if input is not an even integer
    return 0;
}
