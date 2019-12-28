// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: December 2019
// This program calculates the average of an array of 10 random numbers

#include <iostream>
#include <ctime>

int main() {
    // This function calculates the average of an array of 10 random numbers

    // seed
    unsigned int seed = time(NULL);

    // variables and array declaration
    int randomNumber;
    int sum = 0;
    float average;
    int myNumbers[10];

    // Process
    for (int counter = 0; counter < 10; counter++) {
        randomNumber = rand_r(&seed) % 100;
        myNumbers[counter] = randomNumber;
        std::cout << myNumbers[counter] << std::endl;
        sum = sum + myNumbers[counter];
    }

    average = sum/10.0;

    // Output
    std::cout << "" << std::endl;
    std::cout << "The average of these 10 random numbers is " << average
              << std::endl;
}
