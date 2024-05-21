/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: XppaaNAbm2mN
    ID: t1dJ45HltSoN
    Compiler used: 0QLY56SjMCuj
    Created  date: ueRUqLOokKgA
    References: shXjlAQ6oOtS
*/



#include <stdio.h>


int main(){
    int num;
    int sum = 0;

    printf("Enter an even number:");
        scanf("%d", &num);
    
    
    do  {
       sum = sum + 2;       
     } while ( sum < num );

         if (num % 2 == 0) {
    printf("Sum of all even values from 0 to %d is: %d ", num, sum);
    } else if (num % 2 != 0){
    printf("It is not an even integer. ");
    }

    
    return 0;
}




