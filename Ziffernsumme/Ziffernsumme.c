#include <stdio.h>

int main()
{
	int input;
	int sum = 0;
	printf("Insert a series of numbers: ");
	scanf_s("%d", &input);

	while (input > 0)
	{
		sum += input % 10;
		input /= 10;
	}

	printf("The sum of your inputs are: %d", sum);
	return 0;
}
