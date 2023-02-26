#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*
	Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char* string;
	char* stopstring;
	float x;

	string = "3.14159This stopped it";
	x = strtof(string, &stopstring);
	printf("string = %s\n", string);
	printf("   strtof = %f\n", x);
	printf("   Stopped scan at: %s\n\n", stopstring);

	_getch();
	return 0;
}