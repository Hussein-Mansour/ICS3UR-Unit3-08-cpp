// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Mon/May10/2021
// This program Determines if a year is a leap year

#include <iostream>

int main() {
    // this function checks if its a leap year or not
    std::string yearStr;
    int yearInt;

    // input
    std::cout << "\nplease enter the year:" << std::endl;
    std::cin >> yearStr;

    // process & output
    try {
        yearInt = std::stoi(yearStr);

        if (yearInt % 4) {
            if (yearInt % 400) {
                std::cout << yearInt << " not a leap year." << std::endl;
            } else {
                std::cout << yearInt <<
                " is definitely a leap year!" << std::endl;
            }
        } else {
            std::cout << yearInt << " is definitely a leap year!" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "invalid input!";
    }
std::cout << "\n\nDone." << std::endl;
}
