/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: j94IiAFudlFY
    ID: NYBvZs2edP8t
    Compiler used: tk4qEaIA06Uw
    Created  date: JdtgbsuWhNNg
    References: QJiAfdP2xfzB
    */

#include <stdio.h>

int main(){
    float num1, num2, num3, sum;
    // get user to input 
   printf("enter three float number: ");
   scanf("%f %f %f", &num1, &num2, &num3);

if (num1 >  num2 && num1 > num3){
    sum = num2 + num3;
    if (sum = num1){
        printf("a number is the sum of the others: Yes");     
    } else {
        printf("a number is NOT the sum of others");
    }
} else if( num2 > 1 && num2 > num3){
    sum = num1 + num3;
    if (sum = num2){
     printf("a number is the sum of the others: Yes");
    }
} else if ( num3 > 1 && num3 > num2){
    sum = num1+num2;
    if (sum = num3){
     printf("a number is the sum of the others: Yes");
}
} else{
    printf("a number is the sum of the others: No");

}
    return 0;
}