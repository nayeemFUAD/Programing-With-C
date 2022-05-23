#include<stdio.h>

int main(){
int number;
printf("Enter Your Exam Number : ");
scanf("%d",&number);
if(number>=40 && number<=100){
    printf("Passed");
}
else if(number>=0 && number<40){
    printf("Fail");
}
else{
    printf("The Given Value is Wrong");
}
return 0;
}
