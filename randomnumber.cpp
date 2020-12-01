// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: November 2020
// This program checks if a person chose the right number between 0 and 9

#include <iostream>
#include <random>


int main() {
    // this function checks if the right number was chosen
    int someRandomNumber;
    int chosen_number;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]
    someRandomNumber = idist(rgen);

    std::cout << someRandomNumber << std::endl;

    // input
    std::cout << "Enter the number between 0 and 9: ";
    std::cin >> chosen_number;
    std::cout << "" << std::endl;

    // process
    if (chosen_number == someRandomNumber) {
        // output
        std::cout << "Correct!";
    } else {
        // output
        std::cout << "The correct number is " << someRandomNumber << std::endl;
    }
}
