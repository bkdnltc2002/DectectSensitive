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
int main(){
    float a,b,c,d;
    printf("Enter three float number: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a==b+c || b==a+c || c==a+b){
        printf ("A number is the sum of the others: Yes\n");
    }else{
        printf ("A number is the sum of the others: No\n");
    }
    return 0;
}