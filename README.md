# cpp-function-overloading-sum
C++ 
# C++ Function Overloading – Sum Example

This repository contains a simple C++ program that demonstrates **function overloading** by defining multiple `sum()` functions with different parameter lists.

## 🚀 Features
- Sum of two integers
- Sum of three integers
- Sum of three floating-point numbers
- Demonstrates compile-time polymorphism in C++

## 🧠 Concept Used
- Function Overloading
- Data Types (int, float)
- Basic Input/Output in C++

## 🧾 Code Example
```cpp
#include<iostream>
using namespace std;

int sum(int x, int y) {
    return x + y;
}

float sum(float x, float y, float z) {
    return x + y + z;
}

int sum(int x, int y, int z) {
    return x + y + z;
}

int main() {
    cout << sum(10, 5) << endl;
    cout << sum(2.3f, 3.5f, 4.8f) << endl;
    cout << sum(33, 39, 398) << endl;
    return 0;
}
