#include <stdio.h>

#define PI 3.14159

double find_area(double radius);

int main(void) {
	double area = 0.0, radius = 0.0;
	printf("Enter radius: ");
	scanf("%lf", &radius);
    find_area(radius);
	return 0;
}

double find_area(double radius)
{
    double area;
    area = PI * radius * radius;
	printf("Radius of %lf meters; area is %lf sq. meters\n", radius, area);
    return area;
}