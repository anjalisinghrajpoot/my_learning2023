#include<stdio.h>
void bin(unsigned n)
{
	unsigned i;
	for (i = 1 << 31; i > 0; i = i / 2)
		(n & i) ? printf("1") : printf("0");
}

int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    bin(num);
}
