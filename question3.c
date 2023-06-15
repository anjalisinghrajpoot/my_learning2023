#include<stdio.h>
#include<conio.h>
/*
Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.

 
*/

void funtotal(int x,int y,int z){
int sum=0;
sum=x+y+z;
printf("\nSum of marks is %d ",sum);
}

void funpercent(int x,int y,int z){
float percent;
int sum=x+y+z;
int total=300;
percent= (sum/total);
percent=percent*100;
printf("Percentage of marks : %f \n", percent);
}

int main(){
int roll;
char name[20];
int phy,che,maths;
printf("enter your name : ");
scanf("%s",&name[20]);
printf("Enter Roll Number : ");
scanf("%d",&roll);
printf("enter marks of physics : ");
scanf("%d",&phy);
printf("enter marks of chemistry : ");
scanf("%d",&che);
printf("enter marks of Maths : ");
scanf("%d",&maths);

printf(" name : %d",name[20]);
printf(" Roll_no : %d",roll);
printf(" Physics marks  : %d",phy);
printf(" chemistry marks  : %d\n",che);
printf(" maths marks  : %d\n",maths);
funtotal(phy,che,maths);
funpercent(phy,che,maths);
return 0;
}