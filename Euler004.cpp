#include <iostream>

using namespace std;

/* Problem:
A palindromic number reads the same both ways. The largest 
palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
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

