/*
    
    Course: yGxhAScpBbla
    Semester: dXdRzaEFEXH1
    Lab Assessment: yUcn4p1p7e9n
    Author: nkNIAs4WupWN
    ID: 7LvbEKQaneV4
    Compiler used: rM79xorQ5WyH
    Created  date: JdtgbsuWhNNg
    References: g6uSn07TTrtx
*/
#include <stdio.h>
int main(){
    int num;
    int sum=0;
     printf(" enter an even integer:");
    scanf("%d",&num);
    do{
        for (int i=0; i<=num; i=i+2)
        {
            sum=sum+i;
        }
    
if (num %2>0 && num<0){
        printf(" it is not an even integer");}
    }while( num%2==0 && num>=0);
    printf ("sum of all even values from 0 to %d is: %d", num, sum);

    
return 0;
}
     


    
