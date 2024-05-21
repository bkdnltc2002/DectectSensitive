/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: GhlDiNOoJ1YJ
    ID: z3KjQTITFPeE
    Compiler used: rM79xorQ5WyH
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include<stdio.h>

int main () {

    //Enter 3 float numbers
    float a,b,c;
    printf("Enter three float numbers: ");
    scanf("%f %f %f",&a , &b, &c);

    //Checking if any of the number is the sum of others
    if (a+b==c) {
       printf("A number is the sum of the others: YES");
        } if (a+c==b) {
        printf("A number is the sum of the others: YES");
            } if (b+c==a) {
            printf("A number is the sum of the others: YES");                        
                } else {
                printf("A number is the sum of the others: NO");        
                
    }
    return 0;
}