/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: N8uTAYewYqra
    ID: NOYqBw224zvT
    Compiler used: zN5XyhidVF9f 
    Created  date: JdtgbsuWhNNg
    References: UmVgGOUBSIAd
*/

#include <stdio.h>
int main (){
    float num1 , num2 , num3;
    printf ("Enter three float numbers: ");
    // Prompt user to enter numbers
    scanf ("%f %f %f", &num1 , &num2 , &num3);
    printf ("A number is the sum of the others: ");
    // Condition 
    if(num1 == num2 + num3 || num2 == num1 + num3 || num3 == num1 + num2) {
        printf ("YES");
    } else {
        printf ("NO");
    }
    return 0;   
}