#include <iostream>

using namespace std;

/* Problem:
2520 is the smallest number that can be divided by each of the 
numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible 
by all of the numbers from 1 to 20?
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

