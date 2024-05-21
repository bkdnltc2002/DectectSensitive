/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: qET0euGgeEuW
    ID: myJyDRWAxZID
    Compiler used: ZL3ae3Kb5lov
    Created  date: EwHuCz0ykI5S
    References: g6uSn07TTrtx
*/
#include <stdio.h>

int main(void) {
    
    // Get a number
    int num;
    printf("Enter a number (1 - 10): ");
    scanf("%d", &num);

    // Print out pattern
    for (int row = num; row >= 1; row--) {
        for (int block = 1; block <= row-1; block++) {
                printf("    ");}
        for (int val=row; val <= num; val++) {
                printf("%2d  ", val);}
                if (row == 1) {
            for (int i = num-1; i >= 1; i--) {
                printf("%2d  ", i);
            }}
                else {
                  for (int block2 = 1; block2 <= num-row-1; block2++) {
                printf("    ");}
                  for (int val2=row; val2 <= num-1; val2--) {
                printf("%2d  ", val2);
                if (val2==row)
                {break;}}}
                
        
        


        
       
        printf("\n"); 
    
    }  
    return 0;
}