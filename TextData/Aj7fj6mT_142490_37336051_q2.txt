/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: 6kBLuOVyfX7B
    ID: A8eAn992gbHB
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: UmVgGOUBSIAd
*/

#include <stdio.h>

int main(void){
//Input an integer
int evennum;
int sum = 0;
do{
    printf("Enter an even integer: ");
    scanf("%d", &evennum);

//Check if the input integer is even
    if (evennum % 2 == 0){
        do {
            int digit = evennum - (evennum - 2);
                sum = sum + digit;
                evennum = evennum - 2;
            } while (evennum > 0);
            printf("Sum of all even values is %d", 
            sum);
    //Was able to check the input the integer, but could not find the sum
    } else {
        printf("It is not an even integer.");
    }
} while (evennum >= 0);
return 0;
}
