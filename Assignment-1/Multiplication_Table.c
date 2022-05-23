#include<stdio.h>

int main(){
int number, term;
printf("Enter A Number To Print It's Multiplication Table : ");
scanf("%d",&number);
printf("Enter The Total Number Of Terms You Want To Print : ");
scanf("%d",&term);

for(int i=1; i<=term; i++){
    printf("%d x %d = %d\n",number,i,number*i);
}
return 0;
}
