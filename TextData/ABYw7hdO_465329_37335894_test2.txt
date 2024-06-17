/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: MPyjjrBEJzrF
    ID: ubml4gn3MQGe
    Compiler used: 9nMM81R3yyyo
    Created  date: JdtgbsuWhNNg
    References: Mt96p4q1nHo0
*/


#include <stdio.h>
int main(){
    int num;
    int total = 0;
    printf("Enter an even integer: ");
    scanf("%d",&num);
    if(num%2 == 0){
        for(int div = 0 ;div<=num;div+=2){
         total += div;
        }
         printf("Sum of all even values from 0 to %d : %d",num,total); 
        }else{
            printf("It is not an even integer.");
        }
            
    return 0;

}