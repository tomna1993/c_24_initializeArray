#include <stdio.h>

int main(void)
{
	// When declaring and initializing an array simultaneously, there is a special syntax:
	// instantiation syntax can be used to fill up tha array with its starting values
	int array[4] = {0, 1, 2, 3};

	// individual element syntax
	// int array[4];
	// array[0] = 0;
	// array[1] = 1;
	// array[2] = 2;
	// array[3] = 3;


	// in case of instantination syntax we don't have to declare the size of the array,
	// because it will get the size from the initialization
	int array2[] = {10, 11, 12, 13};

	printf("array[0]=%i, array[1]=%i, array[2]=%i, array[3]=%i\n", array[0], array[1], array[2], array[3]);

	printf("array2[0]=%i, array2[1]=%i, array2[2]=%i, array2[3]=%i\n", array2[0], array2[1], array2[2], array2[3]);
}