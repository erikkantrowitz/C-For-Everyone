#include<stdio.h>
#include<stdlib.h>

int* read_file(const char* filename, int* count)
{
    //these three lines opens a file and sets an array to the size of data, 
    //I am cheating here a bit by not actually dynamically allocating it since I know the 
    //file contains 1000 elements.
    FILE* file = fopen(filename, "r");
    int capacity = 1000;
    int *arr = malloc(capacity * sizeof(int));
    int i = 0;

    //poor bit of error handling to not mess with things if the file isn't there
    if (!file) {
        printf("No File Found");
        *count = 0;
        return NULL;
    }

    //this is going to loop as long as there is only integers in the file, if the scan finds the EOF or letters it will exit.
    //as long as it loops fscanf is going to place the integer elements into the address space for my array and then move to the next element.
    while(fscanf(file, "%d", &arr[i]) == 1)
        i++;

    //close the file, pass i to the reference of count in main, and return the array we just created.
    fclose(file);
    *count = i;
    return arr;
}
//this is a function to compute the average in an array, it is the same code showed in the lecture modified for this problem instead of grades
double average_weight(int count, int weights[])
{
    int i;
    double sum = 0.0;

    for (i  = 0; i < count; i++)
        sum += weights[i];

    return sum/count;
}

int main(void)
{
    double average = 0.0;
    int count;
    // int *weights = read_file("no_such_file.txt", &count);
    int *weights = read_file("elephant_seal_data.txt", &count);  //run the read file function above and place the returned array into the on e called weights

    average = average_weight(count, weights);

    printf("The Average Weight of the elephant seals is %.2f", average);

    free(weights);
}