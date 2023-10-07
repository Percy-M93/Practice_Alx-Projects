#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *fileName; //Pointer variable (1st step of handling files in C)
	char ch[100];
	fileName = fopen("fileName.txt", "r");

	printf("%s", fgets(ch, 50, fileName));

	fclose(fileName);

	return (0); 
}