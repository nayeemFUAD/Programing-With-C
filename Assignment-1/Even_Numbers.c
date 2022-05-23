#include<stdio.h>

int main(){
int start, end;
printf("Enter The Range To Print All Even Numbers Among Them : ");
scanf("%d %d",&start,&end);
if(start%2==0){
    for(int i=start; i<=end; i+=2){
        printf("%d\n",i);
    }
}
else{
    for(int i=start+1; i<=end; i+=2){
    printf("%d\n",i);
    }
}
return 0;
}
