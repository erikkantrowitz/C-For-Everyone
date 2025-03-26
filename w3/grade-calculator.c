/*Grade Calculator
Description: Develop a program that asks the user to input their score and uses if-else statements to determine the corresponding letter grade (e.g., A, B, C, D, F). 
You can enhance this project by adding features like handling edge cases (e.g., scores that are exactly on the boundary between grades).*/


#include<stdio.h>

int main(void) {

    int grade;

    printf("Please enter your grade as an integer: ");
    scanf("%d", &grade);

    //a > 89, b >79 && < 89 

    if (grade < 60)
        printf("You have failed");
    else if(grade >= 60 && grade < 70)
        printf("You have passed with a D");

    else if(grade>= 70 && grade < 80) {
        printf("You have passed with a C");
    }
    else if (grade >= 80 && grade < 90){
        printf("You have passed with a B");
    }
    else if (grade >= 90) {
        printf("Congrats, you passed with an A");
    }
    else
        printf("There was a problem somewhere.");

    return 0;
}