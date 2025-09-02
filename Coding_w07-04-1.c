#include <stdio.h>     //Include header

int main() {            //Main function

    int level;                                            //Declare integer variable level

    printf("Enter membership level (1-4): ");           //Prompt user to enter membership level
    scanf("%d", &level);                                 //Read input from user

    if (level == 1) {                                   //Compare if level is 1
        printf("Silver Member: 5%% discount\n");        //Print Silver Member for level 1
    }

    else if (level == 2) {                                        //Compare if level is 2
        printf("Gold Member: 10%% discount + Reward points\n");   //Print Gold Member for level 2
    }

    else if (level == 3) {                                                              //Compare if level is 3
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");     //Print Platinum Member for level 3
    }

    else if (level == 4) {                                                 //Compare if level is 4
        printf("Diamond Member: All benefits + VIP events\n");            //Print Diamond Member for level 4
    }

    else {                                                 //if none of the above conditions
        printf("Invalid membership level\n");            //Print Invalid membership level
    }

    return 0;                                             //return 0 to indicate successful completion
}
