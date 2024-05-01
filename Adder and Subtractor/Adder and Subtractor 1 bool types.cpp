#include <iostream>

int main() {
    bool bit1, bit2;
    
    // Input the two bits
    std::cout << "Enter the first bit (0 or 1): ";
    std::cin >> bit1;
    
    std::cout << "Enter the second bit (0 or 1): ";
    std::cin >> bit2;
    
    // Addition
    bool sum = bit1 ^ bit2;  // XOR operation
    
    // Subtraction
    bool difference = bit1 ^ !bit2;  // XOR operation
    
    // Output the results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    
    return 0;
}