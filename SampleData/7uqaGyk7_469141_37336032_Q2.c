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
    int a,b,c=0,d,e,f,sum=0;
    do{
        printf("Enter an even integer: ");
        scanf("%d", &a);
        if(a%2==0){
        for(b=0; b<=a; b+=2){
            sum=sum+b;           
        }
        printf("Sum of all even values form 0 to %d is: %d\n", a,sum-c);
        c=sum;
        }
    } while(a%2==0);
    printf("It is not an even integer.\n");

    
    return 0;
}
