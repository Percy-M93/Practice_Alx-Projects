#include <stdio.h>

/**
 * main - Promps user to input their date of birth to determin age
 * return: zero (0)
 */

 int main(void)
 {
	int date_Of_birth;
	int const Current_year = 2023;

	int Age;

	printf("Enter the year you were born: ");

	scanf("%d", &date_Of_birth);

	Age = Current_year - date_Of_birth;

	printf("Thank you! You are %d years old\n", Age);

	return (0);

 }