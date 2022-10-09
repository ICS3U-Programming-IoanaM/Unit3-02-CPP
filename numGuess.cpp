// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu
//
// Date: Oct. 8, 2022
// programs that lets you guess the randomly generated number

#include <iostream>
#include <ctime>

int main() {
    // variables
    int userNum, randNum;

    // asks user for their guess
    std::cout << "Enter your guess: ";
    std::cin >> userNum;

    // getting random number
    srand(time(NULL));
    randNum = (rand() % 10) + 1;

    // checks in user's guess is the same as the random number
    if (userNum == randNum) {
        std::cout << "You guessed the right number!" << std::endl;
    } else {
        std::cout << "you guessed the wrong number :(" << std::endl;
    }
}
