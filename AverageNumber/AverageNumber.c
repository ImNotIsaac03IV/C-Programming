#include <stdio.h>

int main(void)
{
	int value;
	float sum = 0;
	float average;
	int counter = 0;

	printf("Average number calculation\n");
	printf("========================================\n");
	printf("Please enter a number (Enter 0 to exit):\n");
	scanf_s("%d", &value);

	while (value != 0)
	{
		counter++;
		sum += value;
		printf("Enter a value:\n");
		scanf_s("%d", &value);
	}

	if (counter != 0)
	{
		printf("Sum: %.2f\n", sum);
		printf("Average: %.2f", sum / counter);
	}
	else
	{

	}

	return 0;
}