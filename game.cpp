#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;          
    int number;     
    srand(time(0));
    number=rand()%51;
   
    cout<<" wWlcome to Magic Number\n Guess a number from 1-50, you have 5 attempts to guess: ";
    for(i=0;i<5;i++)
   
    {
        cin>>n;
        if(number==n) {
        cout<<"\nWell Done, you guessed the Magic Number, "<<number;
        cout<<"\nAttempts you have used: "<<i+1;
        break;
    }
     else if (number>n)
     {
        cout<<"\nYou guessed less than Magic Number, Attempts remaining: "<<5-(i+1);
        if(5-(i+1)>0) {
        cout<<"\nAttempt again, Choose a number more than last time: ";
     }
 }
    else if (number<n)
    {
       cout<<"\nYou guessed more than Magic Number, Attempts remaining: "<<5-(i+1);
       if(5-(i+1)>0) {
       cout<<"\nAttempt again, choose a number more than last time: ";
        }
     }
  }
  if(i==5)
  {
    cout<<"\n\nUnlucky, you ran out of guesses without getting the Magic number,\n better luck next time.";
    cout<<"\nThe Magic number I was looking for is: "<<number;
  }
    return 0;
}
