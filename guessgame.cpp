// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: October 2019
// This program plays the guessing game


#include <iostream>

int main() {
    // This the the constant number
    const float constant_number = 5;
    // These are the variables
    float number;

    // input
    std::cout << "Can you guess the number I choose from 0 to 10: ";
    std::cin >> number;

    // process
    if (number == constant_number) {
        // output
        std::cout << "You guessed it :)";
    } else {
        std::cout << "The correct answer is 5.";
    }
}
