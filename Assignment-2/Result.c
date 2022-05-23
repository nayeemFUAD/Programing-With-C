/*Write a C Program To Find The Result Of a Student*/
#include<stdio.h>

int main(){
int marks;
printf("Enter The Number Of The Exam (0-100) : ");
scanf("%d",&marks);
if(marks>=80 && marks <=100){
    printf("GPA : 4.00\nGrade : A+");
}
else if(marks>=75 && marks <80){
    printf("GPA : 3.75\nGrade : A");
}
else if(marks>=70 && marks <75){
    printf("GPA : 3.50\nGrade : A-");
}
else if(marks>=65 && marks <70){
    printf("GPA : 3.25\nGrade : B+");
}
else if(marks>=60 && marks <65){
    printf("GPA : 3.00\nGrade : B");
}
else if(marks>=55 && marks <60){
    printf("GPA : 2.75\nGrade : B-");
}
else if(marks>=50 && marks <55){
    printf("GPA : 2.50\nGrade : C+");
}
else if(marks>=45 && marks <50){
    printf("GPA : 2.25\nGrade : C");
}
else if(marks>=40 && marks <45){
    printf("GPA : 2.00\nGrade : D");
}
else if(marks>=0 && marks <40){
    printf("GPA : 0.00\nGrade : F");
}
else{
    printf("You Given A Wrong Value. Please Try Again");
}
return 0;
}
