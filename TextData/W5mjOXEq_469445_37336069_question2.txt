/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: QYG9l0IbOIJN
    ID: AvLvKP2JEC5C
    Compiler used: 20zmVn0LRwmo
    Created  date: W5yyWt48i6P7
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main(void){
    
    int num;

    do{
        //Input an even integer
        printf("Enter an even integer: ");
        scanf("%d", &num);

        //Check if the integer is even or odd
        if (num % 2 == 0){
            
            printf("\nSum of all even integer from 0 to %d is: ", num);
            
            int sum = 0;
            
            //Calculate the sum of all even integer from 0 to the integer chosen
            for (int i = 0; i <= num; i = i + 2){
                sum = sum + i;
            }

            printf("%d\n", sum);
        } 
            //End the program if the integer chosen was odd
            else {
                break;
        }
    } while (num % 2 == 0);
    
    printf("\nIt is not an even integer\n");

    return 0;
}