/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: K5T2DUrHOc7q
    ID: le8UTSx6YHOn
    Compiler used: J1EzQMFiIkL2
    Created  date: oG6mj2M38YUJ
    References: shXjlAQ6oOtS
*/
#include<stdio.h>
int main(){
    float num1,num2,num3;// input the numbers
    printf("Enter three float numbers: ");
    scanf("%f %f %f ",&num1,&num2,&num3);
    // input the condition for if-else clause
    if( num1== num2+num3 || num2== num1+num3 || num3==num1+num2){
        printf("A number is the sum of the others :YES\n");// print out the result
    } else {
        printf("A number is the sum of the others :NO\n");// print out the result
    } return 0;
}