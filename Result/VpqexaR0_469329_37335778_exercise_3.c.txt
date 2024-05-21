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
    int a, row, col;
    printf("Enter an even integer from 1 to 10: "); //Prompts user to enter a number from 1 to 10
    scanf("%d", &a);

    //If the user entered a number bigger than 10
    while (a > 10){
        printf("Invalid number \n \n");
        printf("Enter an even integer from 1 to 10: ");
        scanf("%d", &a);
    }

    for (row = a; row >= 1; row--){
        for (col = a; col >= row; col--){
            printf("%4d",col);
        }printf("\n");
        }

    return 0;
}