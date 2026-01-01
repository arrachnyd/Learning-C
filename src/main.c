#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int main () {
	printf("Hello, World!");
	printf("\nI added my repository to Github!");
	
	int a = 23;
	int b = 52;
	
	printf("\nThe sum of %d and %d is %d!", a, b, sum(a, b));
	
	return 0;
}
