/**
 * @file main.cpp
 * @author Yang-Rui Li (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

int main() {
    int start, end;
    
    while (true) {
        std::cout << "Enter the start and end of the range (e.g., 1 18): ";
        std::cin >> start >> end; 

        if (std::cin.fail()) {
            std::cout << "Input Error. Please enter integers (e.g., 1 18)\n";
            // Clear error flag
            std::cin.clear();
            // Ignore wrong input
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    std::cout << "The range of draw is: (" << start << ", " << end << ")\n";

    std::vector<int> numbers;
    for (int i = start; i <= end; ++i) {
        numbers.push_back(i);
    }

    std::mt19937 rng(std::time(nullptr)); // random number generator
    std::shuffle(numbers.begin(), numbers.end(), rng);

    char continueDrawing = 'y';
    while (!numbers.empty()) {
        // If the user enters 'y' or 'Y', draw a number
        if (continueDrawing == 'y' || continueDrawing == 'Y') {
            std::cout << "Drawn number: " << numbers.back() << std::endl;
            numbers.pop_back();
        }

        if (!numbers.empty()) {
            do {
                std::cout << "Do you want to draw another number? (y/n): ";
                std::cin >> continueDrawing;

                // Check if the input is valid
                if (continueDrawing != 'y' && continueDrawing != 'Y' && 
                    continueDrawing != 'n' && continueDrawing != 'N') {
                    std::cout << "Invalid input. Please enter 'y' or 'n'.\n";
                }
            } while (continueDrawing != 'y' && continueDrawing != 'Y' && 
                     continueDrawing != 'n' && continueDrawing != 'N');
        }

        if (continueDrawing == 'n' || continueDrawing == 'N') {
            break;  // If the user enters 'n' or 'N', exit the loop
        }
    }

    std::cout << "Program done.\n";
    return 0;
}
