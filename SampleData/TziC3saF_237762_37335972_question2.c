/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: Tp3qvsWLfZiw
    ID: 01t615c0zrj5
    Compiler used: hzeU18uh7RrX
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>
#include <math.h>

int main(){

     int num;
     
     printf("Enter an even interger: ");
     scanf("%d", &num);
        if (num % 2 != 0){
          printf("It is not an even interger.\n");
        }
        else{
    // calculation
    int sum;
    for (int i = 1; i <= num / 2; i++){
    sum = sum + 2*i;
    }
    
    printf("Sum of all even values from 0 to %d is : %d\n", num, sum);
}



    return 0;
}