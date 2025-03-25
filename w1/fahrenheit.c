/*	F to C Conversion
	written for C for Everyone
	by Erik Kantrowitz */

#include <stdio.h>

int main(void) {

	int farenheit, celcius;

	printf("please insert temp in Farenheit as an integer: ");
	scanf("%d", &farenheit);

	//Conversion part
	celcius = (farenheit - 32)/1.8;
	printf("\n %d farenheit is %d celcius.\n.", farenheit, celcius);
	return 0;
}
