# LibBigInt

    LibBigInt is a C++ library for arbitrary-precision integer arithmetic, supporting operations like factorial, Fibonacci, Catalan numbers, and square root.
    
    LibBigInt is a custom C++ library that provides arbitrary-precision integer arithmetic. It supports basic arithmetic, comparisons, input/output streaming, and advanced mathematical functions like factorial, Fibonacci, Catalan numbers, and integer square root.
    This library is designed for C++17 and later and is perfect for projects requiring large number computations beyond built-in types.

### Features:

    Arbitrary-precision integers (no limit on number size)

    Operator overloading for:

    Addition, subtraction, multiplication, division, modulo

    Increment / decrement (++, --)

    Comparison operators (==, !=, <, <=, >, >=)

    Advanced mathematical functions:

    BigInt Factorial(int n)

    BigInt NthFibonacci(int n)

    BigInt NthCatalan(int n)

    BigInt sqrt(BigInt &n) (integer square root)

    I/O streaming: easy printing and reading via << and >>

    Fully modular design with separate .cpp files for arithmetic, comparison, streaming, and math operations.



### File Structure
    LibBigInt/
    │
    ├── BigInt.hpp             # Main BigInt class declaration
    ├── BigInt.cpp             # Core BigInt member function definitions
    ├── BigIntArithmetic.cpp   # Arithmetic operator definitions
    ├── BigIntComparison.cpp   # Comparison operator definitions
    ├── BigIntStream.cpp       # I/O streaming operator definitions
    ├── BigIntMath.cpp         # Advanced math functions (factorial, fibonacci, catalan, sqrt)
    ├── BigIntMath.hpp         # Declarations of math functions
    ├── main.cpp               # Example/test program using the library
    └── README.md

### Compilation

    To compile your project with all source files, use:

    "g++ -std=c++17 -Wall -Wextra -o bigint main.cpp BigIntArithmetic.cpp BigIntComparison.cpp BigInt.cpp BigIntStream.cpp BigIntMath.cpp"



### Usage
    Include the main header(s) in your program:

    #include "BigInt.hpp"
    #include "BigIntMath.hpp"
    int main() {
        BigInt a("12345678901234567890");
        BigInt b("98765432109876543210");
        BigInt sum = a + b;
        std::cout << "Sum: " << sum << std::endl;
        BigInt fact = Factorial(20);
        std::cout << "20! = " << fact << std::endl;
        return 0;
    }

