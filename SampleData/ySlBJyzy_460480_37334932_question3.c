/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: rU22exttQj9t
    ID: JOxYYplKG2Eu
    Compiler used: TC9AjmIanReT
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/
#include <stdio.h>

int main(){
    //declare the variable
    int number;
    int row;
    int block;

    //get input from user
    printf("Enter a number (1 - 10): ");
    scanf("%d", &number);

    //do calcualtion and print out the results
    for(int row = 1; row <= number; row++){

        //print the white space
        for(int block = 1; block <= number - row; block ++){
            printf("   ");
        }

        //print the left pattern
        for(int block = number - row +1; block < number; block++){
            printf("%3d", block);
        }
        for(int block = number; block >= number - row + 1; block --){
            if(block == number || block == number - row + 1 || row == number){
                printf("%3d", block);
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}