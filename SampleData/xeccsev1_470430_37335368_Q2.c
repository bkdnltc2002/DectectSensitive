/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: wa4z37WXd2No
    ID: 7tYqYIyR1fuK
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

/*
Write a program which keeps asking the user to input an even integer, then calculate and print out
the sum of all even values from 0 to that number. The program stops when the user inputs an odd
integer and print out an error message as below:

Sample Run:
Enter an even integer: 6
Sum of all even values from 0 to 6 is :12

Enter an even integer: 10
Sum of all even values from 0 to 10 is: 30

Enter an even integer: 3
It is not an even integer
*/

#include <stdio.h>

int main() {

    // create an int to store the number and sum
    int num, sum = 0;

    while(1) {
        
        // create an int to store the number and sum
        int num, sum = 0;
        
        // prompt the user to enter an even integer
        printf("Enter an even integer: ");
        // store the user input into num
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            
            // loop through all the integers from 0 to number
            for (int i = 0; i <= num; i++) {
                // check if the number is even
                if (i % 2 == 0) {
                    //printf("%d ", i);
                    // add number sum
                    sum += i;
                }
            }
            
            // print out the sum of the even digits
            printf("Sum of all even values from 0 to %d is: %d\n", num, sum);
            //printf("Do something...\n");
        } else {
            // print out the error message and end program
            printf("It is not an even integer\n");
            break;
        }
    }

    return 0;
}