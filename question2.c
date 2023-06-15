#include<stdio.h>
#include<conio.h>


/*
 Write a program to print the grade of the given student using if else if block
    - 90 to 100 -> "Grade A"
    - 75 to 89 -> "Grade B"
    - 60 to 74 -> "Grade C"
    - 50 to 59 -> "Grade D"
    - 0 to 49 -> "Grade F"

*/

void grade(int x){
    if(x>=90 && x<=100){
        printf("Grade A");
    }
    else if(x>=75 && x<=89){
        printf("Grade B");
    }
    else if(x>=60 && x<=74){
        printf("Grade C");
    }
    else if(x>=50 && x<=59){
        printf("Grade D");
    }
    else if(x>=0 && x<=49){
        printf("Grade F");
    }
    else{
        ("Invalid input");
    }
    
    
}



int main()
{
int num;
printf("Enter marks between 0 to 100 :  \n");
scanf("%d ",&num);
grade(num);

    return 0;

}