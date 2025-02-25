#include <stdio.h>

int main() {
	float income = 0;
	float tax = 0;


	printf("Income tax\n");
	printf("Enter your income: \n");
	scanf_s("%f", &income);


	if (income > 1000000)
	{
		tax = (income - 1000000) * 0.55 + 910000 * 0.5 + 30000 * 0.48 + 29000 * 0.42 + 13000 * 0.35 + 7000 * 0.2;
	}

	else if (income > 90000)
	{
		tax = (income - 90000) * 0.5 + 30000 * 0.48 + 29000 * 0.42 + 13000 * 0.35 + 7000 * 0.2;
	}
	else if (income > 60000)
	{
		tax = (income - 60000) * 0.48 + 30000 * 0.42 + 13000 * 0.35 + 7000 * 0.2;
	}

	else if (income > 31000)
	{
		tax = (income - 31000) * 0.42 + 13000 * 0.35 + 7000 * 0.2;
	}
	else if (income > 18000)
	{
		tax = (income - 18000) * 0.35 + 7000 * 0.2;
	}
	else if (income > 11000)
	{
		tax = (income - 11000) * 0.2;
	}

	printf("The income tax is: %f \n", tax);

	return 0;
}