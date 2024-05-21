/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: ymiwe2h3k9qk
    ID: 6bxm11jkG9zS
    Compiler used: jnj84mv799Vq 
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/

#include <stdio.h>

int main ()
{
    float num1, num2, num3;

    //Input three float numbers
    printf ("Enter three float numbers: ");
    scanf ("%f %f %f", &num1, &num2, &num3);


    //Print out the announcement 
    printf ("A number is the num of the others: ");
    
    //Print out the answer if the checking is true or false
    if ((num1 + num2) == num3) printf ("YES\n");
    else if ((num1 + num3) == num2) printf ("YES\n");
    else if ((num2 + num3) == num1) printf ("YES\n");
    else printf ("NO");

    return 0;
}