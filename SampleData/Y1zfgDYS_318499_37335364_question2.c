/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: dfz6XyZ18AtO
    ID: AfXUxnRPt3A9
    Compiler used: 2yohDZwENKA4
    Created  date: JdtgbsuWhNNg
    References: shXjlAQ6oOtS
*/


#include <stdio.h>

int main(void) {
    
    int num; //declare number

    while (1) {
        printf("Please enter an even integer numbers: \n"); //prompt user to input 1 integer number
        scanf("%d", &num);
        int sum = 0;
        if (num % 2 == 1) { //if user enters odd number. break the loop
            printf("This is not an even number \n");
            break;
        } else{
            for (int counter = 2; counter <= num; counter+=2) {
                sum += counter;
            }
            printf("Sum of all evens from 0 to %d =  %d\n", num, sum);
        }
        
    }
    

    return 0;
}