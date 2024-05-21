/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: G991R3uUQ7wM
    ID: HF9So4gsRl8j
    Compiler used: 0QLY56SjMCuj
    Created  date: JnHk90a2TPTj
*/

#include<stdio.h>

int main(){

    int num, sum = 0;
    
    while(1){

    printf("Enter an even interger: ");
    scanf("%d ", &num);
        if (num % 2 == 0){

            for(int i = 0; i<= num; i+=2){
               sum += i ; 
     }
             printf("The sum of all even valuse from O to %d is : %d", num, sum);
                break;
             }
         else{
            printf("It is not an even interger");
        }
    }
        return 0;
    }



