/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: OtcKISZWUZ8A
    ID: KC8vOO4jhc8h
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main(void){
    
    while(1){

        int sum = 0;
        int a;

        //Input an even number
        printf("Enter an even number: ");
        scanf("%d", &a);

        //Check if a is an even number
        if (a % 2 == 0){
            for (int i = 0; i <= a; i++){
                if (i % 2 == 0){
                    sum += i;
                }
            }
            //Print out the result
            printf("Sum of all even values from 0 to %d is: %d\n", a, sum);
        } else {
            printf("It is not an even integer.");
            break;
        }
    }
    return 0;
}