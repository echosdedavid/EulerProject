#include <iostream>

using namespace std;

/* Problem:
A Pythagorean triplet is a set of three natural numbers, a < b < c, 
for which, Ae2 + Be2 = Ce2

For example, 3e2 + 4e2 = 9 + 16 = 25 = 5e2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
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

