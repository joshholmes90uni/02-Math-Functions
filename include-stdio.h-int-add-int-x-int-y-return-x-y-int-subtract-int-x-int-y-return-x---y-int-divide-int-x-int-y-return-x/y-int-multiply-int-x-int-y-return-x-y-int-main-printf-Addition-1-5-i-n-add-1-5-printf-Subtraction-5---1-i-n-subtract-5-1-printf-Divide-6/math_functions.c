#include <stdio.h>

int add (int x, int y) {
	return x + y;
}

int subtract (int x, int y) {
	return x - y;
}

int divide (int x, int y) {
	return x / y;
}

int multiply (int x, int y) {
	return x * y;
}

int main() {
	
	printf( "Addition 1 + 5: %i \n", add(1,5) );
	printf( "Subtraction 5 - 1: %i \n", subtract(5,1) );
	printf( "Divide 6 / 2: %i \n", divide(6,2) );
	printf( "Multiply 5 * 5: %i \n", multiply(5,5) );

	
}
