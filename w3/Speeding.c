/*Speeding Ticket Program
Description: Create a simple console application that prompts the user to enter their speed. 
Use if-else statements to determine if the user receives a speeding ticket based on predefined speed limits. 
You can expand this project by allowing the user to input different speed limits for different scenarios.*/

#include <stdio.h>

int main(void) {
    
    int speed;

    printf("Please enter your speed as an integer: ");
    scanf("%d", &speed);

    if (speed <= 65)
        printf("You don't get a speeding ticket\n");
    
    else 
        printf("you get a speeding ticket\n");

    return 0;
}