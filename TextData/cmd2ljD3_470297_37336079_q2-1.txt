/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: g3nLEbd6jxSo
    ID: 5CGpI4JFIrVG
    Compiler used: SB9wobYiYZoQ
    Created  date: EwHuCz0ykI5S
    References: shXjlAQ6oOtS
*/

#include <stdio.h>

int main(){

    // Enter a integer number with while loop
    int num, sum = 0;
    while (num %2 ==0){
        printf("Enter an even integer: ");
        scanf("%d", &num);
        printf("\n");

        for(int i = 0;i<= num; i++)  
        {
            if(num %2 ==0){
            sum += (num % i == 0);
            printf("the sum even numbers: %d\n", sum);
            }
            else if( num % 2 == 1){
            printf("this is not even number\n");
            } 
        }    
    }
 

    
    




    return 0;
}