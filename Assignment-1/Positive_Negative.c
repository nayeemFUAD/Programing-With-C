#include<stdio.h>
 int main(){
 int number;
 printf("Enter a Number : ");
 scanf("%d",&number);
 if(number<0){
    printf("%d is negative",number);
 }
 else{
    printf("%d is positive",number);
 }
 return 0;
 }
