#include <stdio.h>

int main() 
{
	int credits = 0;
	int changes;
	int coins = 0;

	printf("Coffee machine\n");
	printf("==============\n");

	printf("Your credit is: %d\n", credits);

	while (credits < 50) {
		printf("insert some coins for a coffee:  10, 20, 50, 100, 500: ");
		scanf_s("%d", &coins);

		if (coins == 10 || coins == 20 || coins == 50 || coins == 100 || coins == 500) {
			credits += coins;
			printf("Your current credit is %d\n", credits);
		}
		else {
			printf("Your coin isn't allowed\n");
		}
	}

	printf("Making coffee...\n");

	changes = credits - 50;

	while (changes >= 100) {
		printf("You'll receive 1 euro\n");
		changes = changes - 100;
	}

	while (changes >= 50) {
		printf("You'll receive 50 cents\n");
		changes = changes - 50;
	}

	while (changes >= 20) {
		printf("You'll receive 20 cents\n");
		changes = changes - 20;
	}

	while (changes >= 10) {
		printf("You'll receive 10 cents\n");
		changes = changes - 10;
	}

	printf("Take your coffee, enjoy!\n");

	return 0;
}