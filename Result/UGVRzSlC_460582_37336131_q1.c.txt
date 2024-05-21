/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: ucWEROuf8TbS
    ID: CrjNkX3JbREC
    Compiler used: zN5XyhidVF9f
    Created  date: EwHuCz0ykI5S
    References: shXjlAQ6oOtS
*/

#include <stdio.h>
int main(){
    float num1;
    printf("please enter float number :    ");
    scanf("%f",&num1);
    float num2;
    printf("please enter float number :    ");
    scanf("%f",&num2);
    float num3;
    printf("please enter float number :    ");
    scanf("%f",&num3);
        if(num1 == num2 + num3 ){
        printf("Yes"); }
        if(num2 == num1 + num3 ){
        printf("Yes"); }
        if(num3 == num1 + num2 ){
        printf("Yes"); }
        else{
            printf("NO");
    }

    return 0;
}