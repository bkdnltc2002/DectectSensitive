/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: HNtmrTm8yeLN
    ID: osNWVh3Y4uLW
    Compiler used: tk4qEaIA06Uw
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>
int main()
{

    //Keep asking the user to input an even integer
    while(1){
        int num, sum=0;
        printf("Enter an even integer: ");
        scanf("%i", &num);

        //Check that integer if it is odd, then stop the program
        if (num%2 != 0){
            break;
        }

        //Sum of even values from 0 to that input integer
        for (int i=0; i<=num; i+=2){
            sum=sum+i;
        }
        printf("Sum of all even values from 0 to %i is: %i\n\n", num, sum); //Print out the sum of values
    }
    printf("It is not an even intger.\n"); //Comment when the user input the odd integer
    return 0;
}