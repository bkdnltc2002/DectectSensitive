/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: MPyjjrBEJzrF
    ID: ubml4gn3MQGe
    Compiler used: 9nMM81R3yyyo
    Created  date: JdtgbsuWhNNg
    References: Mt96p4q1nHo0
*/


#include <stdio.h>
int main (){
    float num1,num2,num3;
    printf("Enter three float numbers: ");
    scanf("%f %f %f",&num1,&num2,&num3);
    if (num1 == num2+ num3){
        printf("A number is the sum of the others: YES");
    } else if(num2==num1+num3){
        printf("A number is the sum of the others: YES");
    } else if(num3==num1+num2){
        printf("A number is the sum of the others: YES");
    }else{
        printf(" number is the sum of the others: NO");
    }

    return 0;
}