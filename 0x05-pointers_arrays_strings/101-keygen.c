#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_random_char - generates a random charracter
 * Return: one character from a list of charracters
 */
char generate_random_char()
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	//randomly select an index in the
	int index = rand() % (sizeof(charset) - 1);
	return charset[index];
}

/**
 * generateRandomPassword - generates a passsword
 * @password: the pointer to the password variable
 * @length: the length of the password
 */

void generateRandomPassword(char *password, int length)
{
	for (int i = 0; i < length; i++) {
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
	srand(time(NULL));
	int passwordLength = 12; // Change this to your desired password length
	char password[passwordLength + 1];
	generateRandomPassword(password, passwordLength);
	printf("Random Password: %s\n", password);
	return (0);
}
