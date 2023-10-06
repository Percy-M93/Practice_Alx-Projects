#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * C file Handling
 * 1. Stream-oriented data files - the data is stored in the same manner as it appears on the screen.
 * 2. System-oriented data files - The data files are more closely associated with the OS.
 * 
 * C file operations:
 * Creation of a new file, opening, reading, writing, closing.
 * 
 * Steps for processing a file:
 * 1. Declare a file pointer
 * 2. Open a file using fopen()
 * 3. Process the file using the suitable function
 * 4. close the file using fclose() function.
 *
 * Functions in stdio:
 * fopen, fclose, getc, putc, getw, putw, fprintf, fscanf, fgets,fputs, feof
 */

int main(void)
{
	FILE *fp;
	fp = fopen("filename.txt", "w");
	//processing of the file
	fprintf(fp, "%s", "hello world");
	//end of processing 
	fclose(fp);

	return (0);

}