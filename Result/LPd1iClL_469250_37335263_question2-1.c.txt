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
    int even,sum = 0;

    do{ // get the even integer input and check if it is an even integer
        printf("Enter an even integer: ");
        scanf("%d",&even);
        if(even % 2 == 1){
            break;
        }
        for(int i = 0; i <= even; i+=2){
            sum = sum + i;
        }
        printf("Sum of all even values from 0 to %d is: %d\n\n",even,sum); // print out the sum
        sum = 0;
    }while(even % 2 == 0 );

    printf("It is not an even integer.\n");

    return 0;
}