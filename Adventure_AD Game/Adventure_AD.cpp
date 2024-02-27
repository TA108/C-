#include <iostream>
#include <cstdio>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        cout << "Weldome to the Adventure game" << endl << "Press a number like 1, 2 or 3 for the selecting the options" << endl;
        cout << "1. Enter the Green Mystic Forest" << endl << "2. Enter the Beautifull Mountains" << endl << "3. Turn Back" << endl;
    
        int choice;
        int a;
        cin >> choice;

        if (choice == 1){
            cout << "Nice choice!!! You have enter the Green Mystic forest.";
            cout << "You felt a gaze on you" << endl << "You turn around and saw a bear" << endl;
            cout << "1.Run!!!" << endl << "2.Attack" << endl << "3.Climb a tree." << endl << "4.Pretend to be dead."<< endl ;
            cin >> choice;
            if (choice == 1){
                cout << "You ran but he caught you and killed you ";
                a = 1;
                break;
                }
            if (choice == 2){
                cout << "You attacked him you fool and you died";
                a = 1;
                break;
            }
            if (choice == 3){
                cout << "You tried to climb a tree but bear was faster. You are killed";
                a = 1;
                break;
            }
            if (choice == 4){
                cout << "You pretend to be dead. He smelled you and went away"<< endl << "You lived" << endl;
                cout << "You went back as you had enough of he fun";
                a = 0;
                break;
            }
        }
        
        if (choice == 2){
            cout << "Beautifull Mountains and fresh air good for an adventure" << endl;
            cout << "You started travelling for an adventure but after an hour it sated snowing" << endl;
            cout << "1.Turn Back";
            cout << "2.Move forard";
            cin >> choice;
            if (choice == 1){
                cout << "You turned back" << endl << "May be it could have been an adventure you were looking for" << endl;
                cout << "You retured home" << endl;
                a = 0;
                break;
            }
            if (choice == 2){
                cout << "You countinued" << endl << "Maybe This is and adventure you where looking for" << endl;
                cout << "But snow started to fall heavly and you froze to death" << endl;
                cout << "You should have retured when you had the chance" << endl << "You died"<< endl;
                a = 1;
                break;
            }
        }
        
        if (choice == 3){
            cout << "You Returned Home" << endl << "Maybe adventure anthor day" << endl;
        }
    }

    int a;
    if (a == 1){
        cout << "You have died"<< endl;
        cout << "Try Again with different aproch" << endl;
    }
    
    if (a == 0){
        cout << "Congo!!! You Won The Game."<< endl;
    }
}

