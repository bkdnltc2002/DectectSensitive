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
    int num, count, total;
    do {
    printf("\nEnter an even integer: ");
    scanf("%d", &num);
    total = 0;
    if (num % 2 == 0) {

        for (count = 0; count <= num; count = count + 2) {
            total = total + count;
        }
        printf("\nThe sum from 0 to %d is %d", num, total);
    } else printf("It is not an even integer.");
    } while (num % 2 == 0);
    return 0;
}