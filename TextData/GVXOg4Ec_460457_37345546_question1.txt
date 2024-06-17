/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: j3zHUDvq6FNc
    ID: tS4r7mThGwnV
    Compiler used: jnj84mv799Vq
    Created  date: eBRyLRdgmUT9
    References: shXjlAQ6oOtS
*/
#include <stdio.h>
int main() {
    int hour, min,min1, hour1, min2;
    int dur;
    printf("Enter beginning time (hour min):");
    scanf("%d %d", &hour, &min);
    printf("\nEnter time duration in minutes: ");
    scanf("%d", &dur);
    min1= min +dur;
    hour1 = hour + min1/60;
    min2 = min1 % 60;
    

    
    printf ("The ending time is (hour min): %d %d", hour1, min2);





    return 0;
}