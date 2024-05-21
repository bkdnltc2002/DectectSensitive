/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: ZaQtsmu7ACV7
    ID: 0mRJO2tiaMwC
    Compiler used: J1EzQMFiIkL2
    Created  date: aesmAYSayOix
    References: shXjlAQ6oOtS
*/
#include <stdio.h>
int main(){
    int col, row, num, count;
    printf("Enter a number (1-10): ");
    scanf("%d", &num);
    for (col = 1; col <= num - 1; col++) {
        for (row = 0; row <= num; row++) {
            if (row + col > num) {
                printf("%2d ", row);
            } else printf("   ");
        }
        for (row = num; row >= 0; row--){
            if (row + col == num + 2) {
                printf("%2d ", row - 1);
            } else printf("   ");
        }
        printf("\n");
    }
    printf("   ");
    for (count = 1; count <= num; count++) {
        printf("%2d ", count);
    }
    for (count = num - 1; count >0; count--) {
        printf("%2d ", count);
    } printf("\n");
    return 0;
}