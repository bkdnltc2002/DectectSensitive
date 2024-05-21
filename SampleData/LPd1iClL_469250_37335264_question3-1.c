/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: UGzq9TE1hCV8
    ID: QXkhm4TqTPlp
    Compiler used: zN5XyhidVF9f
    Created  date: EwHuCz0ykI5S
    References: g6uSn07TTrtx
*/

#include<stdio.h>

int main(){
    int number;
    do{
        printf("Enter a number (1-10): ");
        scanf("%d",&number);
    } while(number < 1 || number > 10); // get user input and check if it is between 1 and 10
    for(int i = 1; i <= number; i++){
        for(int j = 1; j <= number - i; j++){ // print space on the left
            printf("   ");
        }

        for(int m = number - i + 1; m <= number; m++){ // print the numbers on the half left of the pattern
            printf("%2d ",m);
        }

        for(int m = number - 1; m >= number - i + 1; m--){
            if(i == number || m == number - i + 1){ // print the right bottom number and the right side of the pattern
                printf("%2d ",m);
            }
            else{
                printf("   ");
            }
        }
        
        printf("\n");
    }
    return 0;
}