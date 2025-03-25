/* 		miles and yards to kilometer conversion
			by Erik Kantrowitz		*/

#include<stdio.h>

int main(void) {
	int miles, yards;
	double kilometers;

	printf("Input distance in miles and kilometers: ");
	scanf("%d%d", &miles, &yards);

	kilometers = 1.609 * (miles + yards/1760.0);
	printf("\nThe distance in Kilometers is: %lf", kilometers);
}
