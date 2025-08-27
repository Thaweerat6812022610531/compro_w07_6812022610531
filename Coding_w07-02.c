#include <stdio.h>                 //Include header

int main() {                  //Main function

    float  x, y;                                            //Decalre float variable x and y
    printf("Enter two numbers(Ex : 1/3): ");                // Prompt user to enter two numbers
    scanf(" %.2f/%.2f", &x , &y);                           //Read input from user

                                                          
    if (x > y){                                             //Comprare if x is greater than y
        printf("X is greater than Y\n");                    //Prompt user X is greater to Y
    } 
    
    else if (x < y) {                                       // Compare if x is less than y
        printf("X is less than Y\n");                       //prompt user X is less than Y
    } 

    else {                                                   //if none of the above conditions
        printf("X is equal to Y\n");                         //prompt user X is equal to Y
    }
    
    return 0;                                               //return 0 to indicate successful completion
}