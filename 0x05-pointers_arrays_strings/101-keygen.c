#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_random_char - generates a random charracter
 * Return: one character from a list of charracterst
 */

char generate_random_char()
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int index = rand() % (sizeof(charset) - 1);
	return charset[index];
}

/**
 * generate_password - generates a passsword
 * @password: the pointer to the password variable
 * @length: the length of the password
 */

void generate_password(char *password, int length)
{
	int i;

	for (i = 0; i < length; i++) {
		password[i] = generate_random_char();
	}
	password[length] = '\0';
}


/**
 * main - generated a random valid password*
 * Return: always 0
 */

int main(void)
{
	const int length = 12;
	char password[13];

	srand(time(NULL));
	generate_password(password, length);
	printf("%s\n", password);
	return (0);
}
