#include <stdio.h>
/**
 * *Description: main - programm that print  the size of each variable
 * *Return: Always 0 if success
 */
int main(void)
{
	printf("Size of int is : %d byte(s)\n", sizeof(int));
	printf("Size of char is : %d byte(s)\n", sizeof(char));
	printf("Size of long int is : %d byte(s)\n", sizeof(long int));
	printf("Size of long long int is : %d byte(s)\n", sizeof(long long int));
	printf("Size of float is : %d byte(s)\n", sizeof(float));
	return (0);
}
