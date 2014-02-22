/*
 * Programming Project 1
 * First programming project for CSCI 21. Complete the countCharacters, 
 * upAndDown, countWords, computeAverage, findMinValue, and findMaxValue
 * functions to pass the unit tests. 
 * 
 * Objectives:
 * --create a simple driver program
 * --declare and use variables and various data types (including string)
 * --use arithmetic operators
 * --perform logic (decisions and loops)
 * --use functions to organize algorithms
 * --use an array to manage data
 * --write proper header and function documentation for C++ source code
 *
 * Kevan Johnson
 * Date created: 2/04/14
 * Last date modified: 2/21/14
 *
 */

#include <cassert>
#include <climits>
#include <iostream>
#include <string>
using namespace std;

/*
 * This is the function countCharacters. This function counts the number of
 * alphabetic characters and the number of numeric characters in a string.
 * @param string theString - the string in which the characters are to be counted.
 * @param int& alpha - the integer variable represents the number of alphabetic
 *      characters in theString
 * @param int& num - the integer variable represents the number of numeric
 *      characters in theString
 */
void countCharacters (string theString, int& alpha, int& num);

/*
 * This is the function upAndDown. This function capitalizes/lowercases every other
 * character in a string:
 * -- first character of the string should be capitalized,
 * -- the second character lowercase, etc.
 * @param string theString - the string in which the characters are to be modified.
 * @return string - the modified string.
 */
string upAndDown (string theString);

/*
 * This is the function countWords. This function counts the number of words--delimited
 * by space characters--in a string. Assumes that the parameter will never have multiple
 * spaces back-to-back, and will never begin or end with spaces.
 * @param string theString - the string in which the words are to be counted.
 * @return string - returns the modified string.
 */
int countWords (string theString);

/*
 * This is the function computeAverage. This function computes the average of the values
 * in an array. Assumes that the function will never receive an array of size 0.
 * @param int values[] - the integer array whose values are to be averaged.
 * @param int arraySize - the integer representing the size of the array.
 * @return int - returns the computed average of the values in the array.
 */
int computeAverage (int values [], int arraySize);

/*
 * This is the function findMinValue. This function identifies the smallest value
 * in an array. Assumes the function will never receive an array of size 0.
 * @param int values[] - the integer array whose values are to be checked.
 * @param int arraySize - the integer representing the size of the array.
 * @return int - returns the smallest value in the array.
 */
int findMinValue (int values [], int arraySize);

/*
 * This is the function findMaxValue. This function identifies the largest value
 * in an array. Assumes the function will never receive an array of size 0.
 * @param int values[] - the integer array whose values are to be checked.
 * @param int arraySize - the integer representing the size of the array.
 * @return int - returns the largest value in the array.
 */
int findMaxValue (int values [], int arraySize);

/* for unit testing -- do not alter */
template <typename X, typename A>
void btassert(A assertion);
void unittest ();

int main ()
{
	unittest();

	return 0;
}

// CODE HERE -- FUNCTION DEFINITIONS
void countCharacters (string theString, int& alpha, int& num) {
    // Counters started at zero
    alpha = 0;
    num = 0;
    // Variable for length of string
    int size = theString.length();
    // Loop through string
    for ( int i = 0; i < size; i++) {
        // If char in string is alphabetic then increment
        if (isalpha(theString[i])) {
        alpha++;
        }
        // If char in string is numeric then increment
        else if (isdigit(theString[i])) {
        num++;
        }
    }
}

string upAndDown (string theString) {
    // Variable for length of string
    int size = theString.length();
    // Loop through string
    for (int i = 0; i < size; i++) {
        // If char is even
        if (i % 2 == 0) {
        theString[i] = toupper(theString[i]);
        }
        // If char is odd
        else {
        theString[i] = tolower(theString[i]);
        }
    }
return theString;
}

int countWords (string theString) {
    int wordCount = 0;
    int size = theString.length();
    // loop thru until it finds a space then ++
    // FIND ' ' count spaces?
    if (theString.length() > 0){
        wordCount = 1;
        for (int i = 0; i < size; i++) {
            if (isspace(theString[i])) {
            wordCount++;
            }
        }
    }
return wordCount;
}

int computeAverage (int values [], int arraySize) {
    // Variable for storing sum of values
    int sum = 0;
    for (int i = 0; i < arraySize; i++) {
        sum += values[i];
    }
    // Prevent division of zero
    if (sum == 0) {
        return 0;
    }
    else
    return sum/arraySize;
}

int findMinValue (int values [], int arraySize) {
    // Variable to store lowest value
    int smallestValue = values[0];
    // Loop through array
    for (int i = 0; i < arraySize; i++) {
        // Check for smaller value
        if (values[i] < smallestValue) {
        smallestValue = values[i];
        }
    }
return smallestValue;
}

int findMaxValue (int values [], int arraySize) {
    // Variable to store highest value
    int largestValue = values[0];
    // Loop through array
    for (int i = 0; i < arraySize; i++) {
        // Check for larger value
        if (values[i] > largestValue) {
        largestValue = values[i];
        }
    }
return largestValue;
}

/*
 * Unit testing functions. Do not alter.
 */
void unittest ()
{
	cout << "\nSTARTING UNIT TEST\n\n";

	int n1=0, n2=0;

	try {
		countCharacters("", n1, n2);
		btassert<bool>((n1 == 0) && (n2 == 0));
		cout << "Passed TEST 1: countCharacters(empty string)\n";
	} catch (bool b) {
		cout << "# FAILED TEST 1 #\n";
	}

	try {
		countCharacters("hello", n1, n2);
		btassert<bool>((n1 == 5) && (n2 == 0));
		cout << "Passed TEST 2: countCharacters(\"hello\")\n";
	} catch (bool b) {
		cout << "# FAILED TEST 2 #\n";
	}

	try {
		countCharacters("12345", n1, n2);
		btassert<bool>((n1 == 0) && (n2 == 5));
		cout << "Passed TEST 3: countCharacters(\"12345\")\n";
	} catch (bool b) {
		cout << "# FAILED TEST 3 #\n";
	}

	try {
		countCharacters("hello 12345", n1, n2);
		btassert<bool>((n1 == 5) && (n2 == 5));
		cout << "Passed TEST 4: countCharacters(\"hello 12345\")\n";
	} catch (bool b) {
		cout << "# FAILED TEST 4 #\n";
	}

	try {
		countCharacters("&,.", n1, n2);
		btassert<bool>((n1 == 0) && (n2 == 0));
		cout << "Passed TEST 5: countCharacters(\"&,.\")\n";
	} catch (bool b) {
		cout << "# FAILED TEST 5 #\n";
	}

	string s;

	try {
		s = upAndDown("hello");
		btassert<bool>(s == "HeLlO");
		cout << "Passed TEST 6: upAndDown(\"hello\")\n";
	} catch (bool b) {
		cout << "# FAILED TEST 6 #\n";
	}

	try {
		s = upAndDown("HeLlO");
		btassert<bool>(s == "HeLlO");
		cout << "Passed TEST 7: upAndDown(\"HeLlO\")\n";
	} catch (bool b) {
		cout << "# FAILED TEST 7 #\n";
	}

	try {
		s = upAndDown("hElLo");
		btassert<bool>(s == "HeLlO");
		cout << "Passed TEST 8: upAndDown(\"hElLo\")\n";
	} catch (bool b) {
		cout << "# FAILED TEST 8 #\n";
	}

	try {
		s = upAndDown("");
		btassert<bool>(s == "");
		cout << "Passed TEST 9: upAndDown(empty string)\n";
	} catch (bool b) {
		cout << "# FAILED TEST 9 #\n";
	}

	try {
		s = upAndDown("a");
		btassert<bool>(s == "A");
		cout << "Passed TEST 10: upAndDown(\"a\")\n";
	} catch (bool b) {
		cout << "# FAILED TEST 10 #\n";
	}

	try {
		btassert<bool>(countWords("") == 0);
		cout << "Passed TEST 11: countWords(empty string)\n";
	} catch (bool b) {
		cout << "# FAILED TEST 11 #\n";
	}

	try {
		btassert<bool>(countWords("hello") == 1);
		cout << "Passed TEST 12: countWords(\"hello\")\n";
	} catch (bool b) {
		cout << "# FAILED TEST 12 #\n";
	}

	try {
		btassert<bool>(countWords("hello,world") == 1);
		cout << "Passed TEST 13: countWords(\"hello world\")\n";
	} catch (bool b) {
		cout << "# FAILED TEST 13 #\n";
	}

	try {
		btassert<bool>(countWords("hello world") == 2);
		cout << "Passed TEST 14: countWords(\"hello world\")\n";
	} catch (bool b) {
		cout << "# FAILED TEST 14 #\n";
	}

	try {
		btassert<bool>(countWords("hello, world") == 2);
		cout << "Passed TEST 15: countWords(\"hello, world\")\n";
	} catch (bool b) {
		cout << "# FAILED TEST 15 #\n";
	}

	int values [] = {10, 20, 30};
	try {
		btassert<bool>(computeAverage(values, 3) == 20);
		cout << "Passed TEST 16: computeAverage([10,20,30])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 16 #\n";
	}

	values[0] = 0, values[1] = 0, values[2] = 0;
	try {
		btassert<bool>(computeAverage(values, 3) == 0);
		cout << "Passed TEST 17: computeAverage([0,0,0])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 17 #\n";
	}

	values[0] = 5, values[1] = 7, values[2] = 11;
	try {
		btassert<bool>(computeAverage(values, 3) == 7);
		cout << "Passed TEST 18: computeAverages([5,7,11])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 18 #\n";
	}

	values[0] = -10, values[1] = -20, values[2] = -30;
	try {
		btassert<bool>(computeAverage(values, 3) == -20);
		cout << "Passed TEST 19: computeAverages([-10,-20,-30])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 19 #\n";
	}

	values[0] = -5, values[1] = 0, values[2] = 5;
	try {
		btassert<bool>(computeAverage(values, 3) == 0);
		cout << "Passed TEST 20: computeAverages([-5,0,5])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 20 #\n";
	}

	values[0] = -1, values[1] = 0, values[2] = 1;
	try {
		btassert<bool>(findMinValue(values, 3) == -1);
		cout << "Passed TEST 21: findMinValue([-1,0,1])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 21 #\n";
	}

	values[0] = -3, values[1] = -2, values[2] = -1;
	try {
		btassert<bool>(findMinValue(values, 3) == -3);
		cout << "Passed TEST 22: findMinValue([-3,-2,-1])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 22 #\n";
	}

	values[0] = 0, values[1] = 1, values[2] = 2;
	try {
		btassert<bool>(findMinValue(values, 3) == 0);
		cout << "Passed TEST 23: findMinValue([0,1,2])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 23 #\n";
	}

	values[0] = 1, values[1] = 1, values[2] = 1;
	try {
		btassert<bool>(findMinValue(values, 3) == 1);
		cout << "Passed TEST 24: findMinValue([1,1,1])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 24 #\n";
	}

	values[0] = INT_MAX, values[1] = INT_MAX, values[2] = INT_MAX;
	try {
		btassert<bool>(findMinValue(values, 3) == INT_MAX);
		cout << "Passed TEST 25: findMinValue([INT_MAX,INT_MAX,INT_MAX])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 25 #\n";
	}

	values[0] = -1, values[1] = 0, values[2] = 1;
	try {
		btassert<bool>(findMaxValue(values, 3) == 1);
		cout << "Passed TEST 26: findMaxValue([-1,0,1])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 26 #\n";
	}

	values[0] = -3, values[1] = -2, values[2] = -1;
	try {
		btassert<bool>(findMaxValue(values, 3) == -1);
		cout << "Passed TEST 27: findMaxValue([-3,-2,-1])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 27 #\n";
	}

	values[0] = 0, values[1] = 1, values[2] = 2;
	try {
		btassert<bool>(findMaxValue(values, 3) == 2);
		cout << "Passed TEST 28: findMaxValue([0,1,2])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 28 #\n";
	}

	values[0] = 1, values[1] = 1, values[2] = 1;
	try {
		btassert<bool>(findMaxValue(values, 3) == 1);
		cout << "Passed TEST 29: findMaxValue([1,1,1])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 29 #\n";
	}

	values[0] = INT_MIN, values[1] = INT_MIN, values[2] = INT_MIN;
	try {
		btassert<bool>(findMaxValue(values, 3) == INT_MIN);
		cout << "Passed TEST 30: findMaxValue([INT_MIN,INT_MIN,INT_MIN])\n";
	} catch (bool b) {
		cout << "# FAILED TEST 30 #\n";
	}

	cout << "\nUNIT TEST COMPLETE\n\n";
}

template <typename X, typename A>
void btassert (A assertion)
{
	if (!assertion)
		throw X();
}
