/*  C for Everyone lecture example code
	2/3 float addition */


#include <stdio.h>

int main (void) {

	float a, b, c, sum;
	printf(" Input three floats: ");
	scanf("%f%f%f", &a, &b, &c);
	printf("a = %f, b = %f, c = %f\n", a, b, c);
	sum = a + b + c;
	printf("sum is %f\n\n", sum);
	return 0;
}

