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
    float fst, scd, trd;
    printf("Enter three float numbers: \n");
    scanf("%f %f %f", &fst, &scd, &trd);
    printf(" Number is the sum of the others: ");
    if (fst + scd == trd) {
        printf("YES");
    } else if (scd + trd == fst) {
        printf("YES");
    } else if (fst + trd == scd) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}