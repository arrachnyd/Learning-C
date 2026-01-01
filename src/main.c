#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}


int main () {
	printf("Hello, World!");
	printf("\nI'm using Git Bash to run this!");
	
	int a = 3;
	int b = 2;
	
	printf("\nThe sum of %d and %d is %d!", a, b, sum(a, b));
	
	return 0;
}