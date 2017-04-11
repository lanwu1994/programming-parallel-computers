// An Optimized Solution to check Abundant Number and print the first n abundant numbers.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int getSum(int n){
  int sum=0;
  for (int i=1; i<=sqrt(n); i++)
   {
          if (n%i==0)
          {
              // If divisors are equal,take only one
              // of them
              if (n/i == i)
                  sum = sum + i;

              else // Otherwise take both
              {
                 sum = sum + i;
                  sum = sum + (n / i);
              }
          }
  }
  // calculate sum of all proper divisors only
    sum = sum - n;
    return sum;
}
// Function to check Abundant Number
bool checkAbundant(int n)
{
    // Return true if sum of divisors is greater
    // than n.

    return (getSum(n) > n);
}

/* Driver program to test above function */
int main(int argc,char* argv[])
{
    if (argc==1)
        return 0;
    int N=atoi(argv[1]);
    int num =12;
    while(N){
      if (checkAbundant(num)){
          printf("%d\n", num);
          N--;
        }
      num++;

    }
    return 0;


}
