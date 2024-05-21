/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: ykySNwuJRqLy
    ID: u9PmSNkupXA5
    Compiler used: J1EzQMFiIkL2
    Created  date: aesmAYSayOix
    References: shXjlAQ6oOtS
*/

#include <stdio.h>
 
 int main () {
    int inte;
    int sum;
    int val = 0;

    printf("Enter an even interger "); // input the even interger
    scanf("%d", &inte);
       // check if the interger is even
    if (inte % 2 <= 0 ) { 
        for(val <= inte; val % 2 <= 0 ; val ++) {
            
            sum += val;
            printf("The sum of all even value from 0 to %d is: %d \n", inte, sum);

     } 
    } else {
        printf("It is not even \n");
     }
     

    return 0;
    
 }