#include<stdio.h>

int main(){
int term, temp, number1, number2;;
printf("Enter First Two Numbers : ");
scanf("%d %d",&number1,&number2);
printf("Enter The Number Of Terms : ");
scanf("%d",&term);
printf("%d",number1);
printf(" %d",number2);
for(int i=1; i<=term-2; i++){
    temp=number1+number2;
    number1=number2;
    number2=temp;
    printf(" %d",temp);
}
return 0;
}

