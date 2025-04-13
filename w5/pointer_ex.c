#include<stdio.h>

int main(void)
{
    const int SIZE = 5;

    int grades[SIZE] = { 78, 67, 92, 83, 88};
    double sum = 0.0;
    double *pointer_to_sum = &sum;
    int i;

    printf("My Grades are: \n");
    for (i = 0; i < SIZE; i++)
        printf("%d\t", grades[i]);

    printf("\n\n");

    for (i = 0; i < SIZE; i++)
        sum = sum + grades[i];

    printf("My Average grade is %.2f",sum/SIZE);
    printf("\n\n");

    printf("sum is at %p, or %lu, and is %lf\n",pointer_to_sum, pointer_to_sum, *pointer_to_sum);

    printf("grades are at %lu to %lu\n",grades, grades+5);
    printf("in Hex grades are at %p to %p\n",grades, grades+5);
    return 0;

}