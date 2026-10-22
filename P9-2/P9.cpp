// P9-2.cpp - Carson Poppe - 10/22/26 
// This program will count vowels in a string. 

#include <iostream>
#include <string>
#include <sstream>

// Function prototype
int countWords(std::string str);

int main() {
    std::string userInput;

    while (true) {
        std::cout << "Enter a string or Q to quit: ";
        std::getline(std::cin, userInput);

        // Check if the user entered 'Q' to quit
        if (userInput == "Q") {
            break;
        }

        // Call the function and output the result
        int words = countWords(userInput);
        std::cout << "Word count: " << words << std::endl;
    }

    return 0;
}

