#include <iostream>

using namespace std;

/* Problem:
The sum of the squares of the first ten natural numbers is,
1e2 + 2e2 + ... + 10e2 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)e2 = 55e2 = 3025

Hence the difference between the sum of the squares of the first 
ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first
 one hundred natural numbers and the square of the sum.
 */

int main(int argc, char* argv[])
{
  //Code for 001
  int sum =0;
  for(int i=0;i<1000;i++)
    {
      if(i%3 == 0 || i%5 ==0)
	sum+= i;
    }

  cout << "Total sum: " << sum << endl;
  
}

