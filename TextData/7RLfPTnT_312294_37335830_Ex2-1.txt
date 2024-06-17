/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: OD5Fbxa7YNvt
    ID: VtPldBs4cEjO
    Compiler used: J1EzQMFiIkL2
    Created  date: cFP9XKDbUANg
    References: shXjlAQ6oOtS
*/

#include <stdio.h>

int main(){

    int nums;
    printf("Enter an even integer: ");
    scanf("%d", &nums);

    int countNum = 0; 
    int sumEven = 0;

    if(nums %2 == 0){
        //for(int i = 0; i <= nums; i++){
            countNum ++; 
            sumEven += nums;
            printf("\nSum of all even values from 0 to %d is: \n ", sumEven);

        //}

    }else{

        printf("It is not an integer");
    }

    return 0; 

}
    
