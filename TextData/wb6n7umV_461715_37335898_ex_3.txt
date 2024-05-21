/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: plXf9MAg7F19
    ID: 942hx8eeqnYZ
    Compiler used: 9nMM81R3yyyo
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/
#include <stdio.h>
int main (){
int num;
printf("Enter a number (1-10): ");
scanf("%d", &num);
for (int row = 1; row <= num; row++) {
    for (int block = 1; block <= num - row; block++) {
        printf("     ");
    }
    for (int val = num - row + 1; val <= num; val++) {
        printf("%2d   ", val);

    } 
    for (int block = 1; block < row - 1 ; block++) {
        if ( row < num){
        printf("    "); }
    } 
   if ( row <= num - 1 && row > 1) {
        printf("%d", num - row + 1);
    }
    if ( row == num && row > num - row) {
        for (int row = num-1; row >= 1; row--){
            
        printf("%d   ", row);}
    }
    
    
    printf("\n");
}
    return 0;
}