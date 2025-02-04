/** 
 * @file myExample.cpp
 * @brief A simple calculator program.
 * @author Your Name
 * @date 2025-02-04
 */

#include <iostream>

/**
 * @class Calculator
 * @brief A simple calculator class that performs basic arithmetic operations.
 */
class Calculator {
public:
    /**
     * @brief Adds two numbers.
     * @param a First number.
     * @param b Second number.
     * @return The sum of a and b.
     */
    double add(double a, double b) {
        return a + b;
    }

    /**
     * @brief Subtracts two numbers.
     * @param a First number.
     * @param b Second number.
     * @return The result of a - b.
     */
    double subtract(double a, double b) {
        return a - b;
    }

    /**
     * @brief Multiplies two numbers.
     * @param a First number.
     * @param b Second number.
     * @return The product of a and b.
     */
    double multiply(double a, double b) {
        return a * b;
    }

    /**
     * @brief Divides two numbers.
     * @param a Dividend.
     * @param b Divisor.
     * @return The quotient of a / b.
     * @pre b should not be zero.
     */
    double divide(double a, double b) {
        if (b == 0) {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
        return a / b;
    }
};

/**
 * @brief Main function to test the Calculator class.
 * @return 0 on successful execution.
 */
int main() {
    Calculator calc;
    double x = 10, y = 5;

    std::cout << "Addition: " << calc.add(x, y) << std::endl;
    std::cout << "Subtraction: " << calc.subtract(x, y) << std::endl;
    std::cout << "Multiplication: " << calc.multiply(x, y) << std::endl;
    std::cout << "Division: " << calc.divide(x, y) << std::endl;

    return 0;
}
