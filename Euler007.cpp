#include <iostream>

using namespace std;

/* Problem:
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
we can see that the 6th prime is 13.

What is the 10 001st prime number?
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

