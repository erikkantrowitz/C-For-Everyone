#include<stdio.h>
#include<stdlib.h>

//function for reading in file, didn't use any dynamic allocation because I am not sure how that works fully
int* read_file(const char* filename, int* count)
{
    int capacity = 1000;
    FILE *file = fopen(filename,"r");
    int *arr = malloc(capacity * sizeof(int));
    int i = 0;

    //check if the file opened correctly first
    if (!file) {
        printf("Could not open file.\n");
        *count = 0;
        return NULL;
    }
    //read in all elements and  place them in the array
    while(fscanf(file, "%d", &arr[i]) == 1)
        i++;

    //clean up closes file, sets count in main using a pointer passed in, and returns the array 
    fclose(file);
    *count = i;
    return arr;
}

//this is the function to compute the average in an array, it is the same code showed in the lecture modified for this problem
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
    int count, i;
    int* weights = read_file("elephant_seal_data.txt", &count);  //running the function to open the file and return the array
    double average;

    if (weights != NULL) {
        //prints how many numbers were read from the file
        printf("read %d numbers from file\n",count);
        //prints and runs the average function
        printf("The Average weight of the elephant seals is  %.2f\n\n",average_weight(count, weights));
        free(weights);
    }
    else    
        printf("There was an error with the data.\n\n");
}