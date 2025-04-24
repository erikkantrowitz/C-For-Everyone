/*
    bubble sort
*/

#include<stdio.h>

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

//bubble sort return type? use pointers to change array passed in or return an array?
//why not both?

void deref_bubble(int *arr, int size)
{
    int i;
    
    for (i = 0; i < size; i++) {
        if (arr[i] < arr[i+1])
            swap(&arr[i], &arr[i+1]);
    }
}

void print_array(int how_many, int data[], char *str)
{
    int i;
    printf("%s",str);

    for(i = 0; i < how_many; i++)
        printf("%d\t", data[i]);
}

void bubble_sort(int data[], int how_many)
{
    int i, j;
    int go_on;

    for (i =0; i < how_many; i++) {
        print_array(how_many, data, "\nInside bubble\n");
        printf("i = %d, input any int to continue", i);
        scanf("%d", &go_on);
        for (j = how_many - 1; j > i; j--)
            if (data[j-1] < data[j])
                swap(&data[j-1], &data[j]);
    }
}

int main(void) 
{
    const int SIZE = 5;
    int grades[] = {78, 67, 92, 83, 88};

    print_array(SIZE, grades,"My Grades: ");
    printf("\n\n");
    bubble_sort(grades,SIZE);
    print_array(SIZE, grades,"Sorted Grades: ");
    printf("\n\n");

    return 0;
}