#include<stdio.h>//for input and output 
#include<stdlib.h>//for random numbers genaration
#include<time.h>// for time, used as seed(starting point)

int main(){
srand(time(0));
int x = rand()%101;// genarating a number in a range 

printf("\tWelcome\n Your are required to guess a number in a range from 0 to 100\nYou have 10 atempts\n\n ");
int a, n=0;
  do{
    printf("\n\nGuess a number:\t ");
    scanf("%d",&a);
      if(a<x-25)
         printf("The number is too lower\nTry again\n");
        else if(a<x)
         printf("The number is lower\nTry again\n");
        else if(a==x)
         printf("CONGRATULATIONS\n"); 
        else if(a>x+25)
         printf("The number is too larger\nTry again\n ");
        else if (a>x)
         printf("The number is larger\nTry again\n");
        else
         printf("invalid input \n Try again");
         n++;
         printf("%d atempts remaining",10-n);
         }
      while (a!=x && n<10);
       if(a != x)
        printf("\n\nGame Over! \nThe number was %d\n", x);


return 0;
}