#include <stdio.h>
#include <limits.h>

int main() 
{
	int input;
	int sum = 0;
	int counter = 0;
	float average;
	int max1 = INT_MIN;
	int min = INT_MAX;
	int max2 = INT_MIN;
	printf("Insert number (0 to exit): ");
	scanf_s("%d", &input);


	while (input != 0) 
	{
		if(input % 2 == 1)	
		{
			sum += input;
			counter++;
		}

		if (input < min)
		{
			min = input;
		}

		if (input > max1)
		{
			max2 = max1;
			max1 = input;
		}
		else if (input > max2 && input < max1) 
		{
			max2 = input;
		}

		printf("Insert number (0 to exit): ");
		scanf_s("%d", &input);
	}

	average = (float)sum / (float)counter;
	printf("Average: %.2f\n", average);
	printf("Biggest number: %d\n", max1);
	printf("Second biggest number: %d\n", max2);
	printf("Smallest number: %d\n", min);
	return 0;
}