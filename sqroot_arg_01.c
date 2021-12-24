//This is a test file to learn assembler

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{

	//Handle args
	if (argc < 2)
	{
	   printf("Error-Please enter a number(e.g. sqroot_arg_01 <number1>\n");
	   exit(EXIT_FAILURE);
	}

	//Declare variables
	double a;
	double sqr;

	//stdlib.h atoi() to convert char's into int's
	a = atof(argv[1]);
	sqr = sqrt(a);

	//Display results
	printf("Square Root of %f = %f\n", a, sqr);

	return 0;
}
