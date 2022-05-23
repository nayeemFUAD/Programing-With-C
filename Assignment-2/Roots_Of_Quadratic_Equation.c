/* A C program to find the root of a quadratic equation*/

#include<stdio.h>
#include<math.h>

int main(){
int a, b, c;
printf("A quadratic Equation Like,");
printf("ax^2+bx+c=0");
printf("Enter The Value Of a, b & c : ");
scanf("%d %d %d",&a, &b, &c);
int discriminant=pow(b,2)-4*c*a;
if(discriminant==0){
    printf("Two Roots are Equal. And The are,\n");
    printf("%.2f \t %.2f",-b/(2*a),-b/(2*a));
}
else if(discriminant>0){
    printf("Two Distinct Real Roots. And They Are,\n");
    printf("%.2f \t %.2f",(-b+sqrt(discriminant))/(2*a),(-b-sqrt(discriminant))/(2*a));
}
else{
    printf("Two distinct complex roots exists. And They Are,\n");
    float imaginary=sqrt(abs(discriminant))/(2*a);
    float real=-b/(2*a);
    printf("%.2f + i%.2f \t %.2f - i%.2f",real,imaginary,real,imaginary);
}
return 0;
}
