#include<stdio.h>
int main(){
    int year;
    printf("Enter a Year To Check It's Leap Year or Not : ");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||year%400==0){
            printf("%d is Leap Year",year);
    }
    else{
        printf("%d is not Leap Year",year);
    }
return 0;
}
