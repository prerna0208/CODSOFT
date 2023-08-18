#include <bits/stdc++.h>
#include <time.h>
using namespace std;

//                           TASK-2
//Create a program that generates a random number and asks the
//user to guess it. 

int main()
{
    cout << "\n-------------------NUMBER GUESSING GAME-----------------------------\n";
    cout<<"\n----------------------------WELCOME-----------------------------\n";
    int num, guess, tries = 0;
    srand(time(0));
    num = rand()%100 + 1;
    cout << "Guess The Number \n ";

    do{
        cout << "Enter a guess between 1 and 100: ";
        cin >> guess;
        tries++;

        if(guess > num){
            cout << "\nToo High!\n";
        }
        else if(guess < num){
            cout << "\nToo Low!\n";
        }
        else {
            cout << "\n Correct! You got the number in "<<tries<<" guesses!\n";
        }
    } while(guess != num);
    return 0;
}