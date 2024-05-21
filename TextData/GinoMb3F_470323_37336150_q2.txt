/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: K4H2fTNK8CK8
    ID: 2ys1WLLUGdUv
    Compiler used: zN5XyhidVF9f
    Created  date: EwHuCz0ykI5S
    References: g6uSn07TTrtx
*/
#include <stdio.h>
int main(void){
    int num;
    
    int sum = 0;
    do{
        printf("Enter and even integer:");
        scanf("%d", &num);
        if( num % 2 == 0){
            for(int i=0; i <= num; i++){
                if (i % 2 == 0){
                    sum +=i;
                }
            }   
        printf("Sum of all even values from 0 to %d is: %d\n", num, sum);
        sum = 0; //reset for next loop
        }else{
            printf("It is not an even integer.");
        }
    } while(num % 2 == 0);
    return 0;
}





























