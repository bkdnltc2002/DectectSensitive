/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: oXY0olyuH1fy
    ID: dyWhDeFXG6U8
    Compiler used: 9nMM81R3yyyo
    Created  date: JdtgbsuWhNNg
    References: 1PBEEfR7yj2G
*/
#include <stdio.h>

int main(){
    int num,sum = 0;
    do{
        printf("Enter an even integer:");
        scanf("%d", &num);
         //Check if the integer is even  
        if(num % 2 == 0){
          int digit = num / 2;
              sum += digit;
        printf("Sum of all even values from 0 to %d is: %d \n \n", num, sum);          
        } else if (num % 2 != 0){
          printf("It is not an even integer \n");
        }
    } while (num % 2 == 0); //Loop continue
    return 0;    
}
