// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved
//
// Created by Aidan Lalonde-Novales
// Created on 2022-03-07
// This is a program that calculates the
// price of a pizza from diameter

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the cost of a pizza
    const float RENT = 1;
    const float LABOR = 0.75;
    const float COST_PER_INCH = 0.5;
    const float HST = 0.13;

    float diameter;
    float sub_total;
    float total;

    // Input
    std::cout << "Enter the diameter of your pizza (inches): ";
    std::cin >> diameter;

    // Process
    sub_total = RENT + LABOR + (diameter * COST_PER_INCH);
    total = sub_total * (1 + HST);

    // Output
    std::cout << "The pizza will cost $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
