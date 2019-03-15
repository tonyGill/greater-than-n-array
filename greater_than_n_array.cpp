/*

Algorithm was designed in the following series of steps:
1) Declare function prototype for the greater than n function with parameters for the array, size & n
2) Initialize and define the integer type array with elements equivalent to the constant integer size variable
3) Declare and set the integer type n variable with n equal to 2 and call the greaterN function 
4) Display the output of the array elements greater than n
4) Declare and define the greaterN function with arguments for the array, size and n 
5) Use a conditional for loop to iterate over the array elements and an if statement to specify only those elements greater than n
6) Elements greater than n will be printed by this function when it is called in main

Functions/Formulas:
Functions in the case of this lab include the main fuction, which specifies the constant integer variable for size
The array is also declared and initialized within the main function along with n, the greaterN function is called in main

The greaterN function has arguments for the array, size and n, it iterates over the array elements and restricts output to 
only elements greater than n to be displayed when this function is called


Revision History:
March 6, 2019: First working edition created, revised and completed


*/

#include <iostream>
using namespace std;

// Function prototype for the greaterN function with parameters for the array, size and n
void greaterN(int arr[], int SIZE, int n);


// The main function calls the greaterN function and contains the array, size and n integer type variables
int main()
{

	// This represents the constant variable for the fixed size array
	const int SIZE = 8;


	// Declares and intializes the array with even elements
	int arr[] = { 2,4,6,8,10,12,14,16 };

	// Integer type variable specifies n to be in comparison of elements contained within the array, n in this case is set to 2
	int n = 2;

	// Displays the text for numbers greater than n
	cout << "The numbers greater than n are as follows:" << endl;

	// Calls the greaterN function 
	greaterN(arr, SIZE, n);

	// Displays text which specifies which number was used as n
	cout << "\nWhere n is equal to 2" << endl;


	return 0;
}

// Declares the greaterN function with arguments for array, size and n
void greaterN(int arr[], int SIZE, int n) {

	// greaterN function definition

	// Conditional for loop that iterates over the elements contained within the array
	for (int i = 0; i < SIZE; i++)
	{
		// Specifies that only array elements greater than n are to be displayed
		if (arr[i] > n)

			// Displays the array elements greater than n 
			cout << arr[i] << endl;

	}


}