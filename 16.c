#include<stdio.h> 
#define max 100
typedef struct Employee
{
  char name[max];
  char ecode[max];
  char dob[max];
  char salaray[max];
}sinfo;

int main()                                                                     
{                                                                               
    sinfo a;
    printf("Enter Name , Ecode , D.O.B and Salary of employee:");
    gets(a.name);
    gets(a.ecode);
    gets(a.dob);
    gets(a.salaray);
    printf("-----------------------ABC COPERATION-----------------------\n");
    printf("Name : %s\nEcode : %s\nDOB : %s\nSalary : %s\n",a.name,a.ecode,a.dob,a.salaray);
}           

