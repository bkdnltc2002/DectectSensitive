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

    //int limit: is the maximun value of an element in a row other than the input
    int input, column, limit;

    //Program loop continue if the input is still valid
    do {

        //Get user input
        printf("Enter annumber (1 - 10):");
        scanf("%i", &input);

        //Draw the pattern if the input is valid
        if (input >= 1 && input <= 10) {
            column = input * 2 -1; //Calculate the nubmer of column

            //Looping through the matrix
            for (int i = 0; i < input - 1; i++) {
                for(int j = 1; j < column; j++) {
                    limit = input - i; //Calculate the limit

                    /*Only print a number if the column is no less than the limit 
                    and no more than the input*/
                    if (j < limit) {
                        printf("   ");
                    } else if (j >= limit && j <= input) {
                        printf("%3i",j);    
                    } else { 
                        /*If the column is greater than the input, only print if
                        the column is equal to the input + row number, if not, print a blank*/
                        if (j == input + i){
                            printf("%3i", limit);
                        } else {
                            printf("   ");
                        }
                    }
                }
                printf("\n"); //Get to next line
            }

            //Draw the last line
            for (int i = 1; i <= input; i++) {
                printf("%3i", i);
            }
            for (int i = input - 1; i > 0; i--){
                printf("%3i", i);
            }

            printf("\n");//Go to new line
        } else {
            //Print error message if the input is invalid
            printf("It is not a valid input\n");
        }
    } while (input >= 1 && input <= 10); //Consition to continue the loop
    
    return 0;
}