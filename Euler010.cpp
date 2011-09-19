#include <iostream>

using namespace std;

/* Problem:
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
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

