/*
 Patern Generator:
Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
1234554321
1234  4321
123    321
12      21
1        1

Concepts to be used.
- Loops
*/

#include<stdio.h>
#include<conio.h>


int n;
int i,j;

void accept(){
scanf("%d",&n);
//for(i=1;i<=n;i++){
  //  printf("%d ", i);
//}
for(i=n;i>=1;i--){
    for(j=1;j<=n;j++){
        if(i>=j){
            printf("%d",j);
        }
        else{
            printf(" ");
        }
    }

    for(j=n;j>=1;j--){
        if(i>=j){
            printf("%d",j);
        }
        else{
            printf(" ");
        }
    }

  printf("\n");
}

}


int main(){

accept();


return 0;

}
