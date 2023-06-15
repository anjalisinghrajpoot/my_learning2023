
#include<stdio.h>

// Function to calculate sum
void EvenOddSum(int arr[], int n)
{
	int even = 0;
	int odd = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0)
			even += arr[i];
		else
			odd += arr[i];
	}

	printf("Alternate index positions sum %d" ,even);
	//cout << "\nOdd index positions sum " << odd;
}


int main()
{
	int arr[] = { 10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(arr[0]);

	EvenOddSum(arr, n);

	return 0;
}
