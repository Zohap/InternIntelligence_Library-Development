
# MyMathLib - C++ Math Library

**Author:** _[Your Name]_  
**Internship Task 1 – C++ Library Development_

## 📘 Description

**MyMathLib** is a simple and reusable C++ library for basic mathematical operations such as:

- Arithmetic (add, subtract, multiply, divide)
- Factorials and powers
- Prime checking
- GCD/LCM calculations
- Fibonacci number generation

All functions are organized under the `MyMathLib` namespace and implemented in a single `.cpp` file.

---

## 🔧 Features

| Function        | Description                                  |
|-----------------|----------------------------------------------|
| `add(a, b)`     | Returns sum of a and b                       |
| `subtract(a, b)`| Returns difference of a and b                |
| `multiply(a, b)`| Returns product of a and b                   |
| `divide(a, b)`  | Returns quotient (handles division by zero) |
| `factorial(n)`  | Returns factorial of n (error if n < 0)      |
| `power(base, exp)`| Returns base raised to exponent            |
| `isPrime(n)`    | Returns true if n is a prime number          |
| `gcd(a, b)`     | Returns greatest common divisor              |
| `lcm(a, b)`     | Returns least common multiple                |
| `fibonacci(n)`  | Returns the nth Fibonacci number             |

---

## 🚀 How to Use

### 🛠️ Compile
```bash
g++ mymathlib.cpp -o mathlib
```

### ▶️ Run
```bash
./mathlib
```

### 🧪 Sample Output
```
=== Testing MyMathLib ===
Add(5, 3): 8
Subtract(10, 4): 6
Multiply(6, 7): 42
Divide(20, 4): 5
Factorial(5): 120
Power(2, 5): 32
IsPrime(17): Yes
GCD(24, 36): 12
LCM(4, 5): 20
Fibonacci(10): 55
```

---

## 📂 File Structure

```
📁 MyMathLib/
├── mymathlib.cpp       ← C++ file with all logic and main()
└── README.md            ← GitHub documentation (this file)
```

---

## 📝 License

MIT License.  
You’re free to use, modify, and share this library with credit.

---

## 🙋 Questions?

Open an issue or contact [Your Name] on GitHub.
