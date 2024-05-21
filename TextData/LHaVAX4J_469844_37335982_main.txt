/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: nkNIAs4WupWN
    ID: 7LvbEKQaneV4
    Compiler used: rM79xorQ5WyH
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/
#include <stdio.h>
int main(){
    float num1, num2, num3;
printf ("enter three float number:");
scanf( "%f %f %f", &num1, &num2, &num3);

printf("a number is the sum of the others: ");
if ( num1==num2+ num3 || num2==num1+num3 || num3==num1+num2){
    printf("Yes");
}
else{
    printf("No");
}
return 0;

}