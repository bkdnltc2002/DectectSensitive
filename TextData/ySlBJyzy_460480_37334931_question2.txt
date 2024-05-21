/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: rU22exttQj9t
    ID: JOxYYplKG2Eu
    Compiler used: TC9AjmIanReT
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/
#include <stdio.h>
#include <math.h>

int main(){
    //declare the variable
    int evennumber;
    int sum ;
    
    //do the calculation
    do{
        int sum = 0;
        printf("Enter an even integer: \n");
        scanf("%d", &evennumber);
        //check if number is not even
        if(evennumber %2 == 1){
            printf("It is not an even integer.\n");
            break;
        }
        for(int i = 0; i <= evennumber; i +=2){
            sum += i;
        }
        printf("Sum of all even values from 0 to %d is: %d\n", evennumber, sum);
        printf("\n");
    }
    while(evennumber % 2 ==0);

    
    return 0;
}