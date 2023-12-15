#include <iostream>

int main() {
    double A, B, x;

    // Prompt the user to input values for A and B
    std::cout << "Enter value for A: ";
    std::cin >> A;

    std::cout << "Enter value for B: ";
    std::cin >> B;

    // Check if A is zero to avoid division by zero
    if (A == 0) {
        std::cout << "The equation cannot be solved." << std::endl;
    }
    else {
        // Calculate and display the solution
        x = -B / A;
        std::cout << "The solution is x = " << x << std::endl;
    }

    return 0;
}