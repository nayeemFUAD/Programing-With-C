#include<stdio.h>
 int main(){
 int number1, number2, number3;
 printf("Enter Three Number To Check Which is Largest : ");
 scanf("%d %d %d",&number1,&number2,&number3);
 if(number1>number2){
   if(number1>number3) {
    printf("%d is The Largest Number",number1);
 }
 else{
    printf("%d is the Largest Number",number3);
 }
 }
 else{
 if(number2>number3){
    printf("%d is The Largest Number",number2);
 }
 else{
    printf("%d is the largest Number",number3);
 }
 }
 return 0;
 }
