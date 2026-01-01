#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int main () {
	printf("Hello, World!");
	printf("\nI changed the code!");
	
	int a = 3;
	int b = 2;
	
	printf("\nThe sum of %d and %d is %d!", a, b, sum(a, b));
	
	return 0;
}
