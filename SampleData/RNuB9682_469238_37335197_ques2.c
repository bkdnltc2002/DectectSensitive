/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: Bj4u1jGjGGXT
    ID: SISVrcC9ItIg
    Compiler used: qsQdnytvm5L6
    Created  date: HjG3yqpHdhaS
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main ()
{   
    int num, sum; 

    while (num % 2 == 0)
    {
        printf("Enter an even integer: ");
        scanf("%d", &num);

        if (num % 2 != 0)
        {
            printf("It is not an even integer.\n");
            break;
        }
        
        sum = 0;
        for (int i = 2; i <= num; i++)
        {
            if (i%2 == 0)
            {
                sum += i;
            }
            
        }
        printf("Sum of all even values from 0 to %d is: %d\n", num, sum);
        printf("\n");
    } 


    return 0;
}