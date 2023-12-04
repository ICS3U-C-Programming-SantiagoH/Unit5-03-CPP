// Copyright (c) 2023 Santiago Hewett All rights reserved.
// Created by: Santiago Hewett
// Date: Dec 1, 2023
// This program will ask the user for their
// level (mark) and display the middle percent
// of the mark

#include <iostream>
#include <string>

int calc_mark(std::string level) {
    // Statement for each level
    if (level == "4+") {
        return 98;
    } else if (level == "4") {
        return 91;
    } else if (level == "4-") {
        return 83;
    } else if (level == "3+") {
        return 78;
    } else if (level == "3") {
        return 74;
    } else if (level == "3-") {
        return 71;
    } else if (level == "2+") {
        return 68;
    } else if (level == "2") {
        return 65;
    } else if (level == "2-") {
        return 61;
    } else if (level == "1+") {
        return 58;
    } else if (level == "1") {
        return 54;
    } else if (level == "1-") {
        return 51;
    } else if (level == "F") {
        return 30;
    } else {
        return -1;
    }
}

int main() {
    // Declare variables
    std::string user_level_str;
    int result;

    // Get level and display message to the user
    std::cout << "This program will ask the user for their level(mark)"
    << std::endl;
    std::cout << "and display the middle percent of the mark." << std::endl;
    std::cout << "Please enter your level or mark: ";
    std::cin >> user_level_str;

    // Call function and store the result
    result = calc_mark(user_level_str);

    // Check if the input is valid
    if (result != -1) {
        std::cout << "The middle percentage mark for " << user_level_str
        << " is: " << result << "%" << std::endl;
    } else {
        std::cout << user_level_str << " is invalid" << std::endl;
    }
}
