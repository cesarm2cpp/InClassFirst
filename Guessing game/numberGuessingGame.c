/**
*@file food.c
*@author Cesar Martinez
*@class CS2600-02
*@Professor Nima Davarpanah
*@Brief The program users to select a number 1-2 for guessing game, change the max value of guesing game, and quit program
*@date  2021-09-28
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//initates for random integer to be created
int randGenerator(int one, int ten);

int main()
{
    int x; //takes input to select option
    int input; //accepts users number choice
    int min = 1; //min number is 1
    int max = 10; //max number is 10
    int x1 = randGenerator(1,10); //generates a random number from 1 to 10
    //do while loop the keeps program playing if not 3
    do{
        printf("\nPress 1 to play a game");
        printf("\nPress 2 to change the max number");
        printf("\npress 3 to quit");
        printf("\nSelection: ");
        scanf("%d", &x);
        //Switch case allows user to select option above
        switch(x)
        {
            //enter a number from 1-10
            //if it is less than random then let user know
            //if it is greater than random let user know
            case 1: printf("\nEnter a number from 1-%d: ", max);
                    scanf("%d", &input);
                    do{
                        if(input < x1)
                        {
                            printf("\nToo small, try again!");
                        }   
                        if(x1 < input)
                        {
                            printf("\nToo big, try again!");
                        }
                        //ask user to enter number again and try again
                        printf("\nEnter a number from 1-%d: ", max);
                        scanf("%d", &input);
                    }while(input != x1);
                    printf("Hey you got it! It is indeed %d", input);
                    break;
            //ask user to change the max value
            //if its a negative do not allow
            //if is greater than 10 do not allow
            //Otherwise let user know its accepted value
            case 2: printf("\nChange max value to: ");
                    scanf("%d", &x1);
                    do{
                        if(x1<0)
                        {
                            printf("No negatives allowed");
                        }
                        if(x1>10)
                        {
                            printf("No numbers greater than 10");
                        }
                        printf("\nChange max value to: ");
                        scanf("%d", &x1);
                    }while(x1 < 0 && x1 < 11);
                    break;
            //Thank user for playing and close program
            case 3: printf("\nThank you for playing!");
                    exit(1);
                    break;
        }
    }while(x<=3);

    return 0;
}

//creates a random integer to be genertated from 1 - 10
int randGenerator(int one, int ten)
{
    //set all values to 0
    int random = 0;
    int value1 = 0; 
    int value2 = 0;
    //all values must be and less than 11, allowing 10 to still be a value
    if (one < ten)
    {
        value1 = one;
        value2 = ten + 1; 
    } 
    else 
    {
        value1 = ten + 1; 
        value2 = one;
    }
    //generate and return the random number
    srand(time(NULL));
    random = (rand() % (value2 - value1)) + value1;
    return random;
}
