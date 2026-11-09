#pragma once
#include <iostream>
#include <vector>

// ============================================================================
// CSE 3150 Fall 2026 - Programming Assignment 4: Matrix Class Template
// ============================================================================

template<typename T>
class Matrix {
public:
    // Constructors
    Matrix(size_t r, size_t c);                     // Construct r x c matrix initialized to T()
    Matrix(const Matrix& original);                 // Copy constructor (deep copy)

    // Operator Overloads
    bool operator==(const Matrix& rhs) const;       // Dimension check and element-wise equality
    Matrix operator+(const Matrix& rhs) const;      // Element-wise sum (or 1x1 {0} if incompatible)
    Matrix operator-(const Matrix& rhs) const;      // Element-wise difference (or 1x1 {0} if incompatible)
    Matrix operator*(const Matrix& rhs) const;      // Matrix multiplication (or 1x1 {0} if incompatible)
    T& operator()(size_t r, size_t c);              // Non-const element access / mutator
    const T& operator()(size_t r, size_t c) const;  // Const element access (read-only)

    // Utility Member Functions
    Matrix transpose() const;                       // Return transposed (cols x rows) matrix
    size_t getNumRows() const;                      // Return number of rows
    size_t getNumCols() const;                      // Return number of columns
    void display() const;                           // Print formatted matrix to std::cout

private:
    size_t rows;
    size_t cols;
    std::vector<std::vector<T>> data;               // 2D vector storing matrix elements
};
