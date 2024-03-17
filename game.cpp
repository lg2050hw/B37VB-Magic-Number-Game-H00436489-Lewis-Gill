/* magic number game */
/* Game to guess number between one and fifty with five attepts */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;          
    int number;     
    srand(time(0));
    number=rand()%51;
   
    cout<<" Welcome to Magic Number\n Guess a number from 1-50, you have 5 attempts to guess: ";                /*intro to game with small explanation */
    for(i=0;i<5;i++)
   
    {
        cin>>n;
        if(number==n) {
        cout<<"\nWell Done, you guessed the Magic Number, "<<number;                                            /* phrase for when number is guessed */
        cout<<"\nAttempts you have used: "<<i+1;                                                                /* attemps used so far during game */
        break;
    }
     else if (number>n)
     {
        cout<<"\nYou guessed less than Magic Number, Attempts remaining: "<<5-(i+1);                            /* phrase for when guessed underneath the number */
        if(5-(i+1)>0) {
        cout<<"\nAttempt again, Choose a number more than last time: ";                                         /* phrase for needing to guess more than last time */
     }
 }
    else if (number<n)
    {
       cout<<"\nYou guessed more than Magic Number, Attempts remaining: "<<5-(i+1);                             /* phrase for when guessed above the number */
       if(5-(i+1)>0) {
       cout<<"\nAttempt again, choose a number more than last time: ";                                          /* phrase for needing to guess less than last time */
        }
     }
  }
  if(i==5)
  {
    cout<<"\n\nUnlucky, you ran out of guesses without getting the Magic number,\n better luck next time.";     /* phrase for once you run out of guesses */
    cout<<"\nThe Magic number I was looking for is: "<<number;                                                  /* phrase for the number that was being guessed */
  }
    return 0;
}
