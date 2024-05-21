/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: G991R3uUQ7wM
    ID: HF9So4gsRl8j
    Compiler used: 0QLY56SjMCuj
    Created  date: 2tbd7RhagUEv
*/



#include<stdio.h>

int main(){

    int num;
    printf("Please enter a number");
    scanf("%d", &num);
    
    
    for (int row = 1; row <= num; row++) {
        for (int block = 1; block <= num - row -1; block++) {
            printf("    ");
        }
        for (int col = row; col >= 1; col--) {
            printf("%2d  ", col);
        }        
        for (int col = 2; col <= row; col++) {
            printf("%2d  ", col);
        }
        printf("\n"); //newline to go to next row
    }
    
    return 0;
}