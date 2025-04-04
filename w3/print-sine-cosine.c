#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */


//main function just runs the two print functions with a dividing line, set it up this way for better encapsulation.
int main(void) 
{
    void print_sine();
    void print_cosine();
    print_sine();
    printf("\n+++++++++++++++++\n");
    print_cosine();
    printf("\n+++++++++++++++++\n");
    return 0;
}


//function for printing a table of sine values between 0 and 1
void print_sine() 
{
    double interval;
    int i;
    //for loop for printing and formating sine(0,1)
    for(i = 0; i <11; i++)
    {
        interval = i/10.0;
        printf("sin( %lf) = %lf \t",interval, sin(interval));
    }
}

//function for printing a table of cosine values between 0 and 1
void print_cosine() 
{
    double interval;
    int i;
    //for loop that prints and formats a table of cosine(0,1)
    for(i = 0; i <11; i++)
    {
        interval = i/10.0;
        printf("cos( %lf) = %lf \t",interval, cos(interval));
    }
}