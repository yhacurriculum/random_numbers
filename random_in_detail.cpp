/*
	Young Hacks Academy - After School Program
	rand_demo: This program demonstrates the use
	           of random numbers.
*/

#include <iostream>   // for input / output
#include <string>     // for using strings
#include <cstdlib>    // for random numbers
#include <ctime>	  // needed for time on some compilers

using namespace std;  // for more concise code

/*
	This is the main function, it always runs by
	default.
	Pre: None
	Post: Returns int status code
*/
int main()
{
	/*
		The first part of this program is needed
		to 'seed' the random number generator.
		You only need to run this code ONCE at
		the beginning of the program.
	*/
	// BEGIN----> code for seeding the generator

	// this is an unsigned variable, meaning the
	// number is always positive.
	unsigned seed;

	// time(0) returns the number of seconds
	// since the epoch. We need this number
	// because it is different each time we run!
	seed = time(0);

	// srand 'seeds' the random number generator
	// we time since epoch to guarantee the
	// number is different every time we run.
	srand(seed);

	// END------> code for seeding the generator

	/*
		How rand works to generate random numbers:
		rand() will generate a big number.
		rand() % num will limit that number to the
		rannge of zero to num - 1.
		If we then add 1 to that, we limit the
		number to a range of 1 to num.
	*/

	// try it out by running this code, then
	// remove the % 10 + 1 and try again.
	// add back just the % 10 and try.
	// try changing % 10 to % 4 and try.
	for(int i = 0; i < 10; i++)
		cout << rand() % 10 + 1 << endl;

	return 0; // signals everything worked!
	// anything below return 0 will not be run!!!
}

// More explanation of things:

// Q: How does rand() % 10 limit the random number
//    to be below 10?
// A: rand() is a function that returns a random
//    number that is an integer. An integer can
//    be very large! When we see % used as an
//    operator, that is called the 'modulus'
//    operator. The modulus operator returns
//    the remainder of whole number division.
//    When we first learned to do division, we
//    didn't yet know fractions, so we used
//    remainders.
//    Example: 5 / 2 = 2 r 1
//      This means that 2 will evenly go into 5
//      twice. 2x2=4. 4 is one less than 5, so
//      one is the remainder!
//    Example: 5 / 4 = 1 r 1
//             6 / 2 = 3 r 0
//             8 / 3 = 2 r 2   and so on...

// Q: How many times do I have to seed?
// A: Only once at the beginning of your program.
// These 3 lines of code should be at the start of
// your program just inside main() {
/*
	unsigned seed;
	seed = time(0);
	srand(seed);
*/
// any place after these 3 lines you can then
// generate random numbers like so:

// For a very big range of random numbers (no bounds)
// rand()

// For zero to num - 1 where num is an integer (int)
// rand() % num

// If you want to start at one, simply add 1
// rand() % num + 1

// Be sure to try all of the different examples so
// you truly understand what is going on!
