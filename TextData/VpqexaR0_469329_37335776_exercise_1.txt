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
    float a, b, c; //Define three floats
    printf("Enter three numbers: "); //Prompts user to enter three numbers
    scanf("%f %f %f",&a,&b,&c);
    
    //Check if a number is a sum of the others or not
    while (a >= 0){
        if (a+b == c){
            printf("A number is the sum of the others: YES \n");
            break;
    }
        if (a+c == b){
            printf("A number is the sum of the others: YES \n");
            break;
    }
        if (b+c == a){
            printf("A number is the sum of the others: YES \n");
            break;
    }
    // If none of the above applies
        else {
            printf("A number is the sum of the others: NO \n");
            break;
    }
    }
    return 0;
}