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
    float number1;
    float number2;
    float number3;
    
    int ok; //check the condition

    // get input from user
    printf("Enter three float numbers: \n");
    scanf("%f %f %f", &number1, &number2, &number3);

    //do the calculation
    if(number1 == (number2 + number3) || number2 == (number1 + number3) || number3 ==  (number1 + number2)){
        ok = 1;
    }
    else {
        ok = 0;
    }

    //print out for user
    printf("A number is the sum of the others: ");
    if(ok== 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;

}