#include <iostream> // Required for input/output operations, like 'std::cout' and 'std::cin'.

/*
 * Course: ECNG 1009
 * Assignment: Factorial Calculator
 * Date: June 26, 2025 // Current date
 * Author: megan2807
 *
 * This program demonstrates how to calculate the factorial of a non-negative integer
 * using a user-defined function. The 'facto' function computes the factorial,
 * and the 'main' function calls this function with a specific number (6 in this case)
 * and then displays the result.
 *
 * IMPORTANT: This code is my original work for academic purposes.
 * It is licensed under the MIT License (see LICENSE file in the repository).
 * Unauthorized use or submission as one's own work without proper attribution
 * for academic credit is a violation of academic integrity policies.
 *
 * Full source code and licensing details available at:
 * https://github.com/megan2807/FactorialCalculator
 */

 /**
  * Calculates the factorial of a given non-negative integer.
  *
  * The factorial of a non-negative integer 'n' (denoted as n!) is the product
  * of all positive integers less than or equal to 'n'.
  * For example, 5! = 5 * 4 * 3 * 2 * 1 = 120.
  * The factorial of 0 (0!) is defined as 1.
  *
  * n The non-negative integer for which to calculate the factorial.
  * return The factorial value of 'n'.
  */


int facto(int n) {

	// Initialize 'multi' to 1. This is crucial because:
	// 1. The product of nothing is 1 (for the loop's initial state).
	// 2. 0! (factorial of 0) is defined as 1, which this handles if n=0.
	int multi = 1;


	// Loop from 1 up to 'n' (inclusive).
	// In each iteration, 'i' represents the current number being multiplied.
	for (int i = 1; i <= n; i++) {
		multi = multi * i;
	}

	// Return the final calculated factorial.
	return multi;
}

/**
 * The main entry point of the program.
 *
 * This function initiates the program's execution. It demonstrates the use
 * of the 'facto' function by calculating the factorial of 6 and then
 * prints the result to the console.
 */


int main() {

	// Declares an integer variable 'N' to store the result of the factorial calculation.
	// Declares an integer variable 'n' to store the user's input.
	int N;
	int n;

	std::cout << "To calculate N!. Please enter a number for n: ";
	std::cin >> n;

	// Call the 'facto' function with 6 as the input.
	// The factorial of 6 (6 * 5 * 4 * 3 * 2 * 1 = 720) will be calculated
	// and its result will be stored in the 'N' variable.
	N = facto(n);

	// Print the calculated factorial to the console.
	// 'std::endl' ensures that the output is followed by a new line.
	std::cout << "The factorial of n = " << N; // Indicate that the program executed successfully without errors.

	return 0;
}