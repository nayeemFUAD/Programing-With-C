/* Write a C program To print 10 weather reports from Array */
#include<stdio.h>

int main(){
float ID[10]={18.0,21.5,17.0,33.0,31.0,28.7,30.5,20.0,24.8,33.33};
for(int i=0; i<=9;i++){
    printf("%.2f\n",ID[i]);
}
return 0;
}

