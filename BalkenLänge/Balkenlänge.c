#include <stdio.h>

int main()
{
	int length = 1;
	int i;

	printf("Enter length: ");
	scanf_s("%d", &length);

	while (length != 0)
	{
		printf("%d: ", length);


		for (i = 0; i < length; i++)
		{
			printf("=");
		}
		printf("\n");

		printf("Enter the length ( 0 = exit): ");
		scanf_s("%d", &length);
	}

	return 0;
}