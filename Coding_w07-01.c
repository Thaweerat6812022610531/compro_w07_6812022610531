#include <stdio.h>                           //Include header

int main(){                                   //Main function

    float score;                                //declare float variable score
    printf("Enter your score: ");               //prompt user to enter score
    scanf("%f", &score);                        //read score from user input

    if(score >= 50){                                  //if score is 50 or greater
        score += score*(5.0/100.0);                      //increase score by 5%
        printf("Your final score is %.2f\n", score);        //print final score
    } 
    
    else {                                                //if score is less than 50
        printf("Your final score is %.2f\n", score);       //print final score
    }
    printf("end of evaluation\n");                        //print end of evaluation message
    return 0;                                   //return 0 to indicate successful completion
}