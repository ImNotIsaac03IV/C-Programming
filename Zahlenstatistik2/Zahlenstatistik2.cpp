#include <stdio.h>

int main() 
{
	int input;
	int sum = 0;
	int counter = 0;
	float average;
	int max = 0;
	int min = 0;
	printf("Insert number (0 to exit): ");
	scanf_s("%d", &input);
	input = min;

	while (input != 0) 
	{
		if(input % 2 == 1)
		{
			sum += input;
			counter++;
		}
		average = float(sum / counter);
		
		printf("Insert number (0 to exit): ");
		scanf_s("%d", &input);
	}
	return 0;
}