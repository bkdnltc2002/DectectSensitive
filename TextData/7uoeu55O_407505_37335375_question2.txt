/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: 3zwDDhkBgfdW
    ID: v862gvPoUbMp
    Compiler used: 20zmVn0LRwmo
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main(){

    int input;

    //Program loop
    do {
        //Get user input
        printf("Enter an even integer:");
        scanf("%i", &input);

        //Calculate the sum if the input is valid
        if (input % 2 == 0) {
            int sum = 0;
            for (int i = 0; i < input + 1; i++) {
                if (i % 2 == 0) {
                    sum += i;
                }
            }

            //Display the result
            printf("Sum of all even value from 0 to %i is: %i \n", input, sum);
            
        } else {
            //Print error message if the input is invalid
            printf("It is not an even integer\n");
        }
    } while (input % 2 == 0); //Consition to continue the loop
    
    return 0;
}