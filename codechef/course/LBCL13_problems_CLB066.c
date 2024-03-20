// Write a program which does the following

// Take input for two integer variables a & b
// Output "Coding is Fun" to the console if a is greater than b.

#include <stdio.h>

int main() {
	// your code goes here
	
	int a;
	int b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	if (a > b) {
	    printf("Coding is Fun");
	    return 0;
	}
    
}