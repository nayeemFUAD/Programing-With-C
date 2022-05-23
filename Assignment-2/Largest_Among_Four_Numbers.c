/*Write a C program to find the largest number among 4 given numbers using nested if Loop*/
#include<stdio.h>

int main(){
int number1, number2, number3, number4;
printf("Enter Four Numbers To Find Which is Largest : ");
scanf("%d %d %d %d",&number1, &number2, &number3, &number4);
if(number1>number2){
    if(number1>number3){
        if(number1>number4){
            printf("%d is the largest number",number1);
        }
        else{
            printf("%d is the largest number",number4);
        }
    }
    if(number3>number4){
        printf("%d is the largest number",number3);
    }
    else{
        printf("%d is the largest number",number4);
    }
}
    if(number2>number3){
        if(number2>number4){
            printf("%d is the largest number",number2);
        }
        else{
            printf("%d is the largest number",number4);
        }
    }
        if(number3>number4){
            printf("%d is the largest number",number3);
        }
        else{
            printf("%d is the largest number",number4);
        }

return 0;
}
