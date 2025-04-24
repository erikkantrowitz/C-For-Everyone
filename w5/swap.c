/*
    Swap function 
*/

#include<stdio.h>

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main(void)
{
    int a = 2, b = 5;

    printf("a is: %d and b is: %d\n", a, b);
    swap(&a,&b);
    printf("and swapped \na is: %d and b: is %d", a, b);
    return 0;
}