/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jackwalker
 *
 * Created on May 15, 2017, 1:23 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int i, guess;
    i = 7;
    int c3;
    bool keep_going = true;
    
    cout << "I am thinking of a number between 0 and 100.  Try to guess what it is" << endl;
    
    while(keep_going)
    {
        cout << "Enter a number to guess." << endl;
        cin >> guess;
        cout << endl;

        if ( i < guess) 
        {
            cout << guess << " のほが大きい" << endl;
        }
        else if (i > guess)
        {
           cout << guess << " のほが地裁い" << endl; 
        }
        else if( i == guess)
        {
            cout << "Correct!!" << endl;
            cout << "Would you like to play again? 0 for yes" << endl;
            cin >> c3;

            if (c3 != 0 )
            {
                keep_going = false;
            }

        }
    }
    return 0;
}

