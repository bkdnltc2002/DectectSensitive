/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: XUjdTgzond53
    ID: 1pU3RxBcLYKb
    Compiler used: J1EzQMFiIkL2
    Created  date: w7O8s9hMmUof
    References: shXjlAQ6oOtS
*/


#include <stdio.h>
#include <math.h>

int main() {
    // Input Float number
    float num1, num2, num3;
    int result = 0;


    printf("\nEnter a float number: \n");
    scanf("%f %f %f",&num1, &num2, &num3);

    while (result){
        if (num1 + num2 == num3){
            int result=1;
            break;
       }
       else if (num2 + num3 == num1){
            int result=1;
            break;
       }
       else if (num1 + num3 == num2){
            int result=1;
            break;
       }
       else{
        break;
       }

    }

    if (result==1){
        printf("A number is the sum of other: YES");
    }
   else {
        printf("Please try again\n");
   }
}
