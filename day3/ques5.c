#include<stdio.h>
#include<conio.h>

// Function to the largest and smallest digit of a number
void Digits(int n)
{
	int largest = 0;
	int smallest = 9;

	while (n) {
		int r = n % 10;

		// Find the largest digit
		//largest = max(r, largest);
		if(r>largest){
            largest=r;
		}

		// Find the smallest digit
		//smallest = min(r, smallest);
		if(r<smallest){
            smallest=r;
		}

		n = n / 10;
	}
	printf("largest: %d \n smallest: %d",largest,smallest);
}

// Driver code
int main()
{
	int n = 879;


	Digits(n);

	return 0;
}
