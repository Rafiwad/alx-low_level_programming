#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int sum = 0;
	char password[84];

	srand(time(0));

	for (i = 0; sum < 2772 - 122; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
	}

	password[i] = 2772 - sum;
	password[i + 1] = '\0';

	printf("%s", password);

	return (0);
}
