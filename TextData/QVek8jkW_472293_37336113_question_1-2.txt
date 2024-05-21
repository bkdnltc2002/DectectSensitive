/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: 921qIoR84Ukb
    ID: 1sAfoxN6Y83W
    Compiler used: zN5XyhidVF9f
    Created  date: JdtgbsuWhNNg
    References: Mt96p4q1nHo0
*/

#include <stdio.h>

int i;

int main() {

    //Declare array of three floating numbers:
    float float_numbers[3];

    //Prompt user to enter three floating numbers:
    printf("Enter 3 floating numbers: ");
    for (i = 0; i < 3; i++) scanf("%f", &float_numbers[i]);

    //Checking and printing results:
    if (float_numbers[0] == float_numbers[1] + float_numbers[2] || float_numbers[1] == float_numbers[0] + float_numbers[2] || float_numbers[2] == float_numbers[0] + float_numbers[1]) printf("A number is the sum of the others: TRUE");
    else printf("A number is the sum of the others: FALSE");

    return 0;
}