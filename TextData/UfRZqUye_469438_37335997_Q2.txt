/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: GhlDiNOoJ1YJ
    ID: z3KjQTITFPeE
    Compiler used: rM79xorQ5WyH
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/
#include<stdio.h>

int main () {
//Enter integer
int num; int sum;
printf("Create an even integer: ");
scanf("%d", &num);

//checking if it is even or not, then calculate the sum of its even
for(int even = 0; even <=num; even+2) {
    sum = sum + even;
}  
    printf("Sum of all even value from 0 to %d is: %d",num,sum);  
    return 0;
}