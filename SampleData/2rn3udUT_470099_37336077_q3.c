/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: zpm3FRjT6pUU
    ID: Mc8QauiRtrJx
    Compiler used: rM79xorQ5WyH
    Created  date: EwHuCz0ykI5S
    References: shXjlAQ6oOtS
*/
#include <stdio.h>
int main(){
    int num,row,col,space;
    printf("enter a number (1-10); ");
    scanf("%d",&num);
    for (col = 1; col < num; col++){
        printf("%d ",col);
    }   
    for (col = num; col >=1; col--){
        printf("%d ",col);
    }
    return 0;
}

