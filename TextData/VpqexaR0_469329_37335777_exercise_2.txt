/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: pp4Zlg3cz2AF
    ID: YfeNuBh3sn1Z
    Compiler used: 9nMM81R3yyyo
    Created  date: pRVocT3BKPcu
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main() {
    int a, i, sum;
    printf("Enter an even integer: "); //Prompts user to enter a number
    scanf("%d", &a);

    //If the user entered an odd number
    while (a % 2 != 0){
        printf("Not an even number \n \n");
        printf("Enter an even integer: ");
        scanf("%d", &a);
    }

    //Calculates the sum of all even numbers
    for (i = 0; i <= a; i++){
        if (i % 2 == 0) {
        sum = sum + i;
    }
    }

    printf("Sum of all even values from 0 to %d is: %d \n", a, sum); //Prints the final sum

    return 0;
}