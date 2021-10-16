#include <stdio.h>
#include <stdlib.h>
#define N 1
typedef struct {
 int day;
 char month[10];
 int year;
 }date;
 typedef struct
 {
     char name[20];
     date dob;
     date doad;
     int roll;
 }sinfo;
int main()
{
 sinfo emp[N];
 int i,choice;
 for(i=0;i<N;i++)
 {
     printf("Enter the Name,Date of Birth,Date of Admission and Roll Number:");
     gets(emp[i].name); 
     scanf("%d%s%d",&emp[i].dob.day,emp[i].dob.month,&emp[i].dob.year);
     scanf("%d%s%d",&emp[i].doad.day,emp[i].doad.month,&emp[i].doad.year);
     scanf("%d",&emp[i].roll);
 }
    for(i=0;i<N;i++)
    {
        printf("Name: %s\n",emp[i].name);
        printf("D.O.B: %d %s %d\n",emp[i].dob.day,emp[i].dob.month,emp[i].dob.year);
        printf("D.O.A: %d %s %d\n",emp[i].doad.day,emp[i].doad.month,emp[i].doad.year);
        printf("Roll NO: %d\n",emp[i].roll);
    }
}


