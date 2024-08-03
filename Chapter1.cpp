

#include <iostream>
using namespace std;

// Compound Procedures

template<typename Number>
Number square(Number x) {
	return x * x;
}
template<typename Number>
Number sum_of_squares(Number x, Number y) {
	return square(x) + square(y);
}

void Expressions(){


	// Addition
	cout << "(+ 137 349) = " << (137 + 349) << endl;
	cout << "(+ 2.7 10) = " << (2.7 + 10) << endl;
	cout << "(+ 21 35 12 7) = " << (21 + 35 + 12 + 7) << endl;

	// Subtraction
	cout << "(- 1000 334) = " << (1000 - 334) << endl;

	// Multiplication
	cout << "(* 5 99) = " << (5 * 99) << endl;
	cout << "(* 25 4 12) = " << (25 * 4 * 12) << endl;

	// Division
	cout << "(/ 10 5) = " << (10 / 5) << endl;

	// Complex : (+ (* 3 5) (- 10 6))
	cout << "(+ (* 3 5) (- 10 6)) = " << (3 * 5 + (10 - 6)) << endl;


}
//1.1.2 Naming and the Environment

void Naming_Environment() {

	int size = 2;
	double pi = 3.14159;
	int radius = 10;

	//  calculations
	int result1 = 5 * size;
	double area = pi * radius * radius;
	double circumference = 2 * pi * radius;

	// Output results
	cout << result1 << endl;
	cout << area << endl;
	cout <<  circumference << endl;

}

//1.1.3 Evaluating Combinations
void Evaluating_Combinations() {

	cout << (2 + 4 * 6) * (3 + 5 + 7) << endl;

}

//1.1.4 Compound Procedures
void Compound_Procedures() {
	cout << square(21) << endl;
	cout << square(7 + 5) << endl;
	cout << square(square(3)) << endl;
	cout << sum_of_squares(3, 4) << endl;

}
//Conditional Expressions and Predicates
int abs(int x) {
	if (x > 0) {
		return x;
	}
	else if (x == 0) {
		return 0;
	}
	else { 
		return -x;
	}
}
bool greaterOrEqual(int x, int y) {
	return x >= y;
}
bool isBetween5And10(int x) {
	return x > 5 && x < 10;
}
//Exercise 1.2

void prefix() {
	cout << 5 + 4 + (2 - (3 - (6 + 4.0 / 5.0))) << endl;
}

void Exercise(int a , int b, int c) {
	int max1, max2;

	// Determine the two largest numbers
	if (a >= b) {
		if (b >= c) {
			max1 = a;
			max2 = b;
		}
		else if (a >= c) {
			max1 = a;
			max2 = c;
		}
		else {
			max1 = c;
			max2 = a;
		}
	}
	else {
		if (a >= c) {
			max1 = b;
			max2 = a;
		}
		else if (b >= c) {
			max1 = b;
			max2 = c;
		}
		else {
			max1 = c;
			max2 = b;
		}
	}

		cout << "Sum of squares of the two largest numbers among "
		<< a << ", " << b << ", " << c << " is: " << sum_of_squares(max1, max2)
	<< endl;
}
void  a_puls_abs_b(int a, int b)
{
	//exercise 1.4
	cout << "its" << (b > 0 ? a + b : a - b) << endl;
}
//1.1.7 Example: Square Roots by Newton�s Method

int square(int x) {
	return x * x;
}
// Function to square a double
double square(double x) {
	return x * x;
}

void good_enough(double guess, double x) {
	const double tolerance = 0.001;
	if (abs(square(guess) - x) < tolerance) {
		cout << "Good enough" << endl;
	}
	else {
		cout << "Not good enough" << endl;
	}
}


double average(int x, int y) {
	return (x + y) / 2.0;
}
double improve(int guess, int x) {
	return average(guess, x / guess);
}
bool good_enough(int guess, int x) {
	const int tolerance = 1;
	return abs(square(guess) - x) <= tolerance;
}
double sqrt_iter(int guess, int x) {
	if (good_enough(guess, x))
		return guess;
	else
		return sqrt_iter(improve(guess, x), x);
}

double sqrt(int x) {
	if (x < 0) {
		return -1; 
	}
	return sqrt_iter(1, x);
}

double cube(int x) {
	return x * x * x;
}

//1.1.8 Procedures as Black-Box Abstractions

int subtract(int x, int y) {
	return x - y;
}
int divide(int x, int y) {
	return x / y;
}
//1.2 Procedures and the Processes They Generate

int recursivefactorial(int n)
{
	if (n <= 1) {
		return 1;
	}
	else {
		return n * recursivefactorial(n-1);
	}
}

int iterativefactorial(int n)
{
	if (n <= 1) {
		return 1;
	}
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;

	}
	return result;
}
//Exercise 1.9

// increment an integer
int inc(int a) {
	return a + 1;
}

//  decrement an integer
int dec(int a) {
	return a - 1;
}
//Exercise 1.10
int A(int x, int y) {
	if (y == 0) {
		return 0;
	}
	else if (x == 0) {
		return 2 * y;
	}
	else if (y == 1) {
		return 2;
	}
	else {
		return A(x - 1, A(x, y - 1));
	}

}
void function() {

	cout << A(1, 10) << endl;
	cout << A(2, 4) << endl;
	cout << A(3, 3) << endl;
}
//1.2.2 Tree Recursion

int recursivefib(int n) {

	switch (n)
	{
	case 0: return 0;
	case 1: return 1;
	default: return recursivefib(n - 1) + recursivefib(n - 2);
	}

 }
int iterativefib(int a,int b,int n){
	
	if (n == 0) {
		return b;
	}
	else {
		return iterativefib(a + b, a, n - 1);

	}
}
//Example: Counting change
int  firstDenomination(int kindsOfCoins)
{
	switch (kindsOfCoins)
	{
	case 1: return 1;
	case 2: return 5;
	case 3: return 10;
	case 4: return 25;
	case 5: return 50;
	default: return 0;
	}
}
int cc(int amount, int kindsOfCoins) {
	if (amount == 0) return 1;
	if (amount < 0 || kindsOfCoins == 0) return 0;

	int denom = firstDenomination(kindsOfCoins);
	return cc(amount, kindsOfCoins - 1) + cc(amount - denom, kindsOfCoins);
}
int countChange(int amount) {
	return cc(amount, 5);
}



//Exercise 1.11:
int f_recursive(int n) {
	if (n < 3) {
		return n;
	}
	else {
		return f_recursive(n - 1) + 2 * f_recursive(n - 2) + 3 * f_recursive(n - 3);
	}
}

int f_iterative(int n) {
	if (n < 3) {
		return n;
	}
	else {
		int f[3] = { 0, 1, 2 }; // f(0) , f(1) , f(2)

		for (int i = 3; i <= n; i++)
		{
			int fn = f[2] + 2 * f[1] + 3 * f[0];
			f[0] = f[1];
			f[1] = f[2]; 
			f[2] = fn;
		}
		return f[2];
	}

}
//1.2.3 Orders of Growth
//Exercise 1.15:
double p(double x) {
	return (3 * x) - (4 * cube(x));
}
double sine(double angle) {
	
	if (abs(angle) <= 0.1) {
		return angle;
	}
	else {
		return p(sine(angle / 3.0));
	}
}
//1.2.4 Exponentiation
//linear recursive
int expt_recursive(int b, int n) {
	if (n == 0) {
		return 1;
	}
	return b * expt_recursive(b, n - 1);
}
// Iterative
int expt_iter(int b, int counter, int product) {
	
	if (counter == 0) {
		return product;
	}
	
	return expt_iter(b, counter - 1, b * product);
}
int expt(int b, int n) {
	return expt_iter(b, n, 1);
}

int fast_expt(int b, int n) {
	if (n == 0) {
		return 1;
	}
	else if (n % 2 == 0) { 
		return square(fast_expt(b, n / 2));
	}
	else { 
		return b * fast_expt(b, n - 1);
	}
}

void even(int n) {
	if (n % 2 == 0) {
		cout << n << "is even " << endl;
	}
	else {
		cout << n << "is not even " << endl;
	}
}

//Exercise 1.16:

int iterative_expt(int b, int n) {
	int a = 1;
	int power = b;

	while (n > 0) {
		if (n % 2 == 1) {
			a *= power;
		}
		power *= power; 
		n /= 2;
	}

	return a; 
}
//Exercise 1.17:
int doubleValue(int x) {
	return x * 2;
}

int halve(int x) {
	return x / 2;
}

int fast_mult(int a, int b) {
	if (b == 0) {
		return 0;
	}

	if (b % 2 == 0) {
		return fast_mult(doubleValue(a), halve(b));
	}

	else {
		return a + fast_mult(a, b - 1);
	}
}
//Exercise 1.18:
int iterative_mult(int a, int b) {
	int result = 0;
	int cr_a = a;
	int cr_b = b;

	while (cr_b > 0) {
		if (cr_b % 2 == 1) {
			result += cr_a;
		}
		cr_a = doubleValue(cr_a);
		cr_b = halve(cr_b);
	}

	return result;
}
//1.2.5 Greatest Common Divisors

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}
//1.2.6 Example: Testing for Primality

bool divides(int a, int b) {
	return b % a == 0;
}

int find_divisor(int n, int test_divisor) {
	if (test_divisor * test_divisor > n) {
		return n;
	}
	else if (divides(test_divisor, n)) {
		return test_divisor;
	}
	else {
		return find_divisor(n, test_divisor + 1);
	}
}
int smallest_divisor(int n) {
	return find_divisor(n, 2);
}
bool is_prime(int n) {
	return n == smallest_divisor(n);
}

int expmod(int base, int exp, int m) {
	if (exp == 0) {
		return 1;
	}
	else if (exp % 2 == 0) {
		int half_exp = expmod(base, exp / 2, m);
		return (half_exp * half_exp) % m;
	}
	else {
		return (base * expmod(base, exp - 1, m)) % m;
	}
}
bool fermat_test(int n) {
	int a = 1 + rand() % (n - 1);
	return expmod(a, n, n) == a;
}
bool fast_prime(int n, int times) {
	if (times == 0) {
		return true;
	}
	else if (fermat_test(n)) {
		return fast_prime(n, times - 1);
	}
	else {
		return false;
	}
}


//Exercise 1.23

int next(int test_divisor) {
	if (test_divisor == 2) {
		return 3;
	}
	else {
		return test_divisor + 2;
	}

}
//1.3.1 Procedures as Arguments
int sum_integers(int a, int b) {
	if (a > b) {
		return 0;
	}
	else {
		return a + sum_integers(a + 1, b);
	}
}
double sum_cubes(int a, int b) {
	if (a > b) {
		return 0;
	}
	else {
		return cube(a) + sum_cubes(a + 1, b);
	}
}
double pi_sum(int a, int b) {
	if (a > b) {
		return 0;
	}
	else {
	
		double result = 1.0 / (a * (a + 2));
		
		return result + pi_sum(a + 4, b);
	}
}
int term(int x) {
	return x * x;
}

int next(int x) {
	return x + 1;
}

int sum(int (*term)(int), int a, int (*next)(int), int b) {
	if (a > b) {
		return 0;
	}
	else {
		return term(a) + sum(term, next(a), next, b);
	}
}
double pi_term(double x) {
	return 1.0 / (x * (x + 2));
}

double pi_next(double x) {
	return x + 4;
}

double pi_sum(double a, double b) {
	double sum = 0.0;
	double x = a;
	while (x <= b) {
		sum += pi_term(x);
		x = pi_next(x);
	}
	return sum;
}


int main()
{
	
	Expressions();
	Naming_Environment();
	Evaluating_Combinations();
	Compound_Procedures();
	
	Exercise(2, 3, 4);
	a_puls_abs_b(3, -3);
	good_enough(6, 8);
	cout << recursivefactorial(5)<< endl;
	cout << iterativefactorial(5) << endl;
	cout << recursivefib(8) << endl;
	cout << iterativefib(1, 0, 8) << endl;
	cout << "the number of ways" << countChange(100)<< endl;
	cout << f_recursive(7) << endl;
	cout << f_iterative(7) << endl;
	

	if (fast_prime(7, 10)){
		cout << 7 << " is likely prime." <<endl;
	}
	else {
		cout << 7 << " is not prime." << endl;
	}


	even(7);
	int numbers[] = { 199, 1999, 19999 }; 


	for (int number : numbers) {
		cout << "The smallest divisor of " << number << " is " << smallest_divisor(number) << endl;
	}

}


