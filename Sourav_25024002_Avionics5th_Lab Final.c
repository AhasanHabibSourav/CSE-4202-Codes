#include <stdio.h>
#include <stdlib.h>

 struct Courses {
        int code[9];
        float credit[9];
        float score[9];
        float grade[9];
        };

int main()
{
 struct Courses course;

course.credit[] = {3.00, 3.00, 3.00, 3.00, 3.00, 1.5, 0.75, 0.75, 1.5};


   printf("Second Semester GPA Calculator\n");

   printf("Enter score for AVE 4201: ");
   scanf("%f",&course.score[0]);

   printf("Enter score for CSE 4201: ");
   scanf("%f",&course.score[1]);

   printf("Enter score for HUM 4203: ");
   scanf("%f",&course.score[2]);

   printf("Enter score for MATH 4203: ");
   scanf("%f",&course.score[3]);

   printf("Enter score for CHEM 4201: ");
   scanf("%f",&course.score[4]);

   printf("Enter score for CSE 4202: ");
   scanf("%f",&course.score[5]);

   printf("Enter score for AVE 4202: ");
   scanf("%f",&course.score[6]);

   printf("Enter score for CHEM 4202: ");
   scanf("%f",&course.score[7]);

   printf("Enter score for ASE 4202: ");
   scanf("%f",&course.score[8]);

   for (int i = 0; i < 9; i++) {
        if (course.score[i] >= 80){
        course.grade[i] = 4.00;
   }
   else if (course.score[i]>=75) {
    course.grade[i] = 3.75;
   }

    else if (course.score[i]>=70){
    course.grade[i] = 3.5;
   }

    else if (course.score[i]>=65){
    course.grade[i] = 3.25;
   }

    else if (course.score[i]>=60){
    course.grade[i] = 3.00;
   }

    else if (course.score[i]>=55){
    course.grade[i] = 2.75;
   }
    else if (course.score[i]>=50){
    course.grade[i] = 2.5;
   }
    else if (course.score[i]>=45){
    course.grade[i]= 2.25;
   }

    else if (course.score[i]>=40){
    course.grade[i] = 2.00;
   }

    else if (course.score[i] < 40){
    course.grade[i] = 0.00;
   }}


   float total_credits = 0;
   for (int i = 0; i < 9; i++) {
        total_credits = total_credits + course.credit[i];
   }

   float total_grade = 0;
   for (int i = 0; i < 9; i++) {
    float temp = course.grade[i] * course.credit[i];
    total_grade = total_grade + temp;
    temp = 0;
   }

   float gpa = total_grade / total_credits;

   printf("\n");
   printf("Total Credits: %.2f\n",total_credits);
   printf("Total Grade Points Earned: %.2f\n",total_grade);
   printf("Semester GPA: %.2f\n",gpa);






return 0;
}
