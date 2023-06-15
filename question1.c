#include<stdio.h>

//biggest of two number using IF ELSE

void withifelse(int x, int y){

    if(x>y){
        printf("%d is greater ", x);
            }
    else{
        printf("%d is greater ", y);
    }
}

//biggest of two using ternary operator

void withternery(int x, int y){
    (x>y?printf("%d is greater ", x):printf("%d is greater ",y));
}

int main()

{
int a,b;
printf("Enter two numbers \n");
scanf("%d %d,", &a,&b);
withifelse(a,b);
withternery(a,b);
}
