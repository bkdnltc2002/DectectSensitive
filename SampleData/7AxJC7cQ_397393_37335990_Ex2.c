#include<stdio.h>
/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: zdYuarofgEuJ
    ID: sDA0tdbOWndW
    Compiler used: 9nMM81R3yyyo
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

int main(){

// Question 2 (8 pts)
// Write a program which keeps asking the user to input an even integer, then calculate and print out
// the sum of all even values from 0 to that number. The program stops when the user inputs an odd
// integer and print out an error message as below:

// Sample Run:
// Enter an even integer: 6
// Sum of all even values from 0 to 6 is: 12
// Enter an even integer: 10
// Sum of all even values from 0 to 10 is: 30
// Enter an even integer: 3
// It is not an even integer.
// Explanation: Sum of all even values from 0 to 10 is: 0 + 2 + 4 + … + 10 = 30

//Declaration part 
int num,sum=0,tmp=0;
//Operate the Do...While loop
do{
    //Ask the user to enter to even integer
    printf("\nEnter an even integer: ");
    scanf("%d",&num); 

    //Condition if user enter odd number, the program will automatically end itself
    if(num%2==1){
        printf("It is not an even integer.");
        //escape the loop Do...While
        break;
    }
    
    //list the number from 0 to num with "For" loop with "i", only the even number
    for(int i=0; i<=num; i+=2){ 
        // take the variable sum to plus i
            sum+=i; 
            
    }
    //printing part
    printf("Sum of all even values from 0 to %d is: %d",num,sum);
    //reset the sum for another loop calculating
    sum=sum-sum;
}
//if the user enter even number, the program will keep asking to input again
while(num%2==0);
//Ending
printf("\nEnd the program");


















return 0;
}