#include<stdio.h>

int main(){
int temp, number;
printf("Enter A Number To Check It Is Prime or Not : ");
scanf("%d",&number);
for(int i=2; i<number; i++){
    if(number%i==0){
       temp++;
       }
}
if(temp==0){
   printf("%d is prime",number);
   }
   else{
    printf("%d is not prime",number);
   }
return 0;
}
