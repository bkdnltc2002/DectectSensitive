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
        
        //Input a number
        printf("Enter a number (1 - 10): ");
        scanf("%d", &num);
        
        //Check if the number entered was in the range required
        if (num < 1 || num > 10){
            printf("Please try again! ");
        }

    } while (num < 1 || num > 10);

    int left_num = num, block1 = num - 1, block2 = 0, last_lane = num - 1, last_row = num - 1;
    
    
    for (int i = 0; i < num; i++){

        for (int i = 0; i < block1; i++){
            printf("   ");
        }

        block1--;

        for (int i = left_num; i <= num; i++){
            printf("%2d ", i);
        }
        
        left_num--;


        for (int i = 0; i < block2; i++){
                printf("  ");
            }

        block2++;
        
        if (i != 0){
            printf("%d", last_lane);
            last_lane--;
        }
    


        printf("\n");
    }

}



