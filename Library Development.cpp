// mymathlib.cpp
#include <iostream>
#include <stdexcept>
#include <cmath>

// Math Library Namespace
namespace MyMathLib {
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    int multiply(int a, int b) { return a * b; }

    double divide(double a, double b) {
        if (b == 0.0) throw std::runtime_error("Division by zero");
        return a / b;
    }

    long long factorial(int n) {
        if (n < 0) throw std::invalid_argument("Negative number not allowed");
        long long result = 1;
        for (int i = 2; i <= n; ++i) result *= i;
        return result;
    }

    double power(double base, int exponent) {
        return std::pow(base, exponent);
    }

    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; ++i)
            if (n % i == 0) return false;
        return true;
    }

    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int lcm(int a, int b) {
        return (a * b) / gcd(a, b);
    }

    int fibonacci(int n) {
        if (n < 0) throw std::invalid_argument("Negative index not allowed");
        if (n == 0) return 0;
        if (n == 1) return 1;
        int a = 0, b = 1, result = 0;
        for (int i = 2; i <= n; ++i) {
            result = a + b;
            a = b;
            b = result;
        }
        return result;
    }
}

// Main function to test the library
int main() {
    using namespace MyMathLib;

    std::cout << "=== Testing MyMathLib ===\n";
    std::cout << "Add(5, 3): " << add(5, 3) << "\n";
    std::cout << "Subtract(10, 4): " << subtract(10, 4) << "\n";
    std::cout << "Multiply(6, 7): " << multiply(6, 7) << "\n";
    std::cout << "Divide(20, 4): " << divide(20, 4) << "\n";
    std::cout << "Factorial(5): " << factorial(5) << "\n";
    std::cout << "Power(2, 5): " << power(2, 5) << "\n";
    std::cout << "IsPrime(17): " << (isPrime(17) ? "Yes" : "No") << "\n";
    std::cout << "GCD(24, 36): " << gcd(24, 36) << "\n";
    std::cout << "LCM(4, 5): " << lcm(4, 5) << "\n";
    std::cout << "Fibonacci(10): " << fibonacci(10) << "\n";

    return 0;
}
