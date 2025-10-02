/*
Name: Ogwoka Ethan Motonu  
Reg No:CT100/G/29160/25
Description:exams eligibility check
*/
#include<stdio.h>//scanf(),printf()

//main function
int main(){
int attendance;
float marks;

//prompt the student to enter attendance
printf("Enter attendance,\n");
scanf("%d",& attendance);

//prompt the student to enter marks
printf("Enter marks\t");
scanf("%f",& marks);

if (attendance>=75 && marks>=40){
printf("You are eligible for final exams");
}
else{
printf("You are not eligible for final exams");
}

return 0;
}