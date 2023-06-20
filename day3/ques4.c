
#include<stdio.h>
#include<conio.h>

 static int maxnumber(int n, int k)
    {
        // Generate the largest number
        // after removal of the least
        // K digits one by one
        for (int j = 0; j < k; j++) {

            int ans = 0;
            int i = 1;

            // Remove the least digit
            // after every iteration
            while (n / i > 0) {

                // Store the numbers formed after
                // removing every digit once
                int temp = (n / (i * 10))
                               * i
                           + (n % i);
                i *= 10;

                // Compare and store the maximum
                if (temp > ans)
                    ans = temp;
            }

            // Store the largest
            // number remaining
            n = ans;
        }

        // Return the remaining number
        // after K removals
        return n;
    }


int main()
    {
        int n = 6358;
        int k = 1;
        int n2 = 9856;
        int k2 = 1;
        int m=maxnumber(n,k);
      printf("%d",m);
      int m2=maxnumber(n2,k2);
      printf("\n%d",m2);

  return 0;
    }
