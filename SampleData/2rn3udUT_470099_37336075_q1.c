/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: zpm3FRjT6pUU
    ID: Mc8QauiRtrJx
    Compiler used: rM79xorQ5WyH
    Created  date: EwHuCz0ykI5S
    References: shXjlAQ6oOtS
*/
#include <stdio.h>
int main(){
    float num1, num2, num3;
    printf("enter 3 float number: ");
    scanf("%f %f %f",&num1, &num2 ,&num3);
    //check if any number in this float is the sum of other two numbers or not
    if(num1 + num2 == num3){
        printf("A number is the sum of the others: YES");
    }
    else if(num2 + num3 == num1){
        printf("A number is the sum of the others: YES");
    }
    else if(num1 + num3 == num2){
        printf("A number is the sum of the others: YES");
    }
    else{
    printf("A number is the sum of the others: NO");
    }
    return 0;
}