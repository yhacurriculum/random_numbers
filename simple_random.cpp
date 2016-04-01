/*
	Young Hacks Academy - After School Program
	rand_demo: This program demonstrates the use
	           of random numbers.
*/

#include <iostream>   // for input / output
#include <string>     // for using strings
#include <cstdlib>    // for random numbers
#include <ctime>	    // needed for time on some compilers

using namespace std;  // for more concise code

int main()
{
	// these 3 lines must be at the start of our program
	// to create random numbers!
	unsigned seed;
  seed = time(0);
  srand(seed);

  // This will generate 10 random numbers
  // between 1 and 10 and print them
	for(int i = 0; i < 10; i++)
	{
		cout << rand() % 10 + 1 << endl;
	}

	return 0;
}
