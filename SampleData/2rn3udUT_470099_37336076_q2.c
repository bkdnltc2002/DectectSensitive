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
    printf("Enter an even integer: ");
    int even, sum = 0,dis;
    scanf("%d", &even);
    if ( (even % 2) != 0)  //check the number is even or not
        {
            printf("It is not an even integer.");
        }
    if ( (even % 2) == 0)
    {
        for (dis = 0; dis < even; dis+0)
    {
        dis = dis + 2;
        printf("%d ",dis);
        //adding all the number together
        sum = sum + dis;
    }
            printf("\nSum of all even values from 0 to 10 is: %d",sum);
    }
    return 0;
}