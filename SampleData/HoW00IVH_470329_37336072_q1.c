/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: umczgJLmqU2Y
    ID: Dzos1zm2SUhl
    Compiler used: J1EzQMFiIkL2
    Created  date: JdtgbsuWhNNg
    References: shXjlAQ6oOtS
*/

#include <stdio.h>
int main () {
    double numb1, numb2, numb3;

    printf("Enter three float numbers: "); // input three numbers
    scanf("%lf %lf %lf", &numb1, &numb2, &numb3);

    double sum = numb1;
    // check if the number 1,2 or 3 is the sum of the other 3
   if (sum = numb2 + numb3) {
    sum =numb1;
    printf ("A number is the sum of the other numbers: YES \n");

   } else if (sum = numb1 + numb3) {
    sum = numb2;
    printf ("A number is the sum of the other numbers: YES \n");
   } else if (sum = numb1 + numb2) {
    sum = numb3;
    printf ("A number is the sum of the other numbers: YES \n");
   } else {
    printf (" A number is the sum of the other numbers: NO \n");
   }
   

    
   return (0);
}
