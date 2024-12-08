#include <stdio.h>

int main() {
	int input;
	int sum = 0;
	int counter = 0;
	float average = 0;
	int max1 = 0;
	int max2 = 0;
	printf("Please enter a number or 0 to exit: ");
	scanf_s("%d", &input);

	while (input != 0) 
	{		
		if (input % 2 == 0) 
		{
			sum += input;
			counter++;
		}

		if (input > max1) 
		{
			max2 = max1;
			max1 = input;
		}
		else 
		{
			if ((input <= max1) && (input > max2)) 
			{
				max2 = input;
			}
		}
		printf("Please enter a number or 0 to exit: ");
		scanf_s("%d", &input);
	}
	average = sum / counter;
	printf("Sum: %d\n", sum);
	printf("Counter: %d\n", counter);
	printf("Average: %.1f\n", average);
	printf("Biggest number: %d\n", max1);
	printf("Second biggest number: %d\n", max2);
	return 0;
}