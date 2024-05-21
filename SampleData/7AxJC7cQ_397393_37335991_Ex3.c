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
//Question 3: (9 points)
int main(){

int num;
do{
    printf("Please enter enter an integer between 1 and 10 inclusively: ");
    scanf("%d",&num);
    if(num<=0||num>=11){
        printf("\nThat's not in the range");
    }

}
while(num<=0 || num>=11);

//print the left side of the pyramid

for(int i=1; i<=num; i++){
    //print the left side blank first
    for(int blank=1; blank<=num-i; blank++){
        printf("  ");
    }
    //print left side numbers
    for(int b=9;b>=0;b--){
        for(int k=num-b; k>=num;k++){
            printf("%2d",k);
            }
    }
    // //print the right side blank
    if(i==10){
        for(int k=9;k>=1;k--){
            printf("%2d",k;)
        }
    }
    if(i==2){
        printf(" 9");
    }
    
    //Blocks of white spaces on the right side
    for (int block=i-7;block<=i-1;block++){
        printf("  ");
      }
    switch (i)
    case 3: printf(" 8");
    case 4: printf(" 7");
    case 5: printf(" 6");
    case 6: printf(" 5");
    case 7: printf(" 4");
    case 8: printf(" 3");
    case 9: printf(" 2");

    printf("\n");
}




    return 0;
}