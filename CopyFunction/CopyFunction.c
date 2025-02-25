#include <stdio.h>
#include <string.h>

char* my_strcpy(char zeile2[], char zeile1[]) 
{
	int i;
	for (i = 0; zeile1[i] != '\0'; i++)
	{
		zeile2[i] = zeile1[i];
	}
	zeile2[i] = '\0';
	return zeile2;
}

int main()
{
	char input[] = "Hello World";
	char output[50];

	my_strcpy(output, input);

	printf("Copied string is: %s", output);

	return 0;
}