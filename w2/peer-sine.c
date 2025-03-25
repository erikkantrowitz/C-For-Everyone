#include<stdio.h>
#include<math.h>
int main()
{
    double x,result;
    printf("Enter the value of x: ");
    scanf("%lf",&x);
    result = sin(x);
    printf("sin(%lf) = %lf\n", x, result);
    return 0;
}