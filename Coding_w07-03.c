#include <stdio.h>     //Include header

int main(){                              //Main function

    int level;                                            //Declare integer variable level
    printf("Enter level (1-4): ");                        //Prompt user to enter level
    scanf("%d", &level);                                  //Read input from user
      
    if (level <= 0) {                                                  //Compare if level is less than or equal to 0
        printf("The level below 1 is not allowed\n");                  //Prompt user The level below 1 is not allowed
    }

    else if (level > 4) {                                              //Compare if level is greater than 4
        printf("The level above 4 is not allowed\n");                  //Prompt user The level above 4 is not allowed
    }

    else {                                             //if none of the above conditions

        switch (level) {                               //Switch case for level

            case 1: printf("Beginner\n");                       //Print Beginner for level 1
            break;

            case 2: printf("Intermediate\n");                    //Print Intermediate for level 2
            break;

            case 3: printf("Advanced\n");                          //Print Advanced for level 3
            break;

            case 4: printf("Expert\n");                              //Print Expert for level 4
            break;
        }
    }

    return 0;                                     //return 0 to indicate successful completion
}
