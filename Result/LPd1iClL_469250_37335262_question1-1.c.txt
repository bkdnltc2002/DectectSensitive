/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: UGzq9TE1hCV8
    ID: QXkhm4TqTPlp
    Compiler used: zN5XyhidVF9f
    Created  date: EwHuCz0ykI5S
    References: g6uSn07TTrtx
*/

#include<stdio.h>

int main(){
    float float1,float2,float3; 

    printf("Enter three float numbers: ");
    scanf("%f %f %f", &float1, &float2, &float3); // get 3 float numbers input

    if(float1 + float2 == float3 || float1 +float3 == float2 || float2 + float3 == float1){ //print result
        printf("A number is the sum of the others: YES");
    }
    else{
        printf("A number is the sum of the others: NO");
    }
    
    return 0;
}