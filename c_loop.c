//This is a test file to learn assembler

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{

	//Handle args
	if (argc < 3)
	{
	   printf("Error-Please enter two numbers (e.g. c_loop <number1> <number2>)\n");
	   return 1;
	}

	//Declare variables
	int a,b,c;

	//stdlib.h atoi() to convert char's into int's
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	//add variables
	c = a + b;

	//Display results
	printf("%d + %d = %d/n", a, b, c);

	return 0;
}
