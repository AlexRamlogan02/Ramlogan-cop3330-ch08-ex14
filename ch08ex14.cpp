/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alexandra Ramlogan
 *  Chapter 8 Exercise 14
 */

//#include "std_lib_facilities.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//it can be useful because a const is constant and doesnt chang. it can make calculations easy, and reduce
//chances of numbers getting mixed up, making it safe. It might not be used often because there arent many 
//advantages to using a const compared to a normal int declaration

void f(const int a, int b); //a simple function to multiply a number by a constant of 2, as it will only double
//and do nothing else with a

int alpha(const char c, const char d); //a function to test if a const char is the same as a char from input
//I used a constant because it will always be looking for an a, and it won't change. this makes comparison a little bit
//safer 

int main (void){

    //const declarations. these will never change unless its definition is changed
    const int constant = 2;
    const char alphaLetter = 'a';

    //input declarations
    string word;
    int input;

    //find the double
    cout << "What number do you want to double?\n";
    cin >> input;       
    f(constant, input);


    do //ask the user to input words that start with 'a' until a false answer is returned
    {
        cout << "Tell me a letter that starts with a letter a\n";
        cin >> word;
    } while (alpha(alphaLetter, word[0]) != 0); //while it is a letter that starts with the letter a
    
    cout << word << " doesnt start with a!\n";

    return 0;
}

void f(const int a, int b){
    cout << a * b << "\n"
    ;
}

int alpha(const char c, const char d){
    return (c == d);
}