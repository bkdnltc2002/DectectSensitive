
/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: XppaaNAbm2mN
    ID: t1dJ45HltSoN
    Compiler used: sDHnoTCtRwt0
    Created  date: ueRUqLOokKgA
    References: shXjlAQ6oOtS
*/



#include <stdio.h>

int main(){

    float num1, num2, num3;

    printf("Enter three float number: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 + num2 == num3){
        printf("A number is the sum of the others: YES \n");
    } else if  (num1 + num3 == num2){
         printf("A number is the sum of the others: YES \n");
    } else if  (num2 + num3 == num1){
         printf("A number is the sum of the others: YES \n");
    } else {
        printf("A number is the sum of the others: NO");
    }

    return 0;
}