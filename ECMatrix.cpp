#include "ECMatrix.h"

// ============================================================================
// CSE 3150 Fall 2026 - Programming Assignment 4: Matrix Implementation
// ============================================================================

// 1. Constructors

template<typename T>
Matrix<T>::Matrix(size_t r, size_t c) : rows(r), cols(c), data(r, std::vector<T>(c, T())) {
    // TODO: Initialize an r-by-c matrix with default value T() (e.g., 0)
}

template<typename T>
Matrix<T>::Matrix(const Matrix& original) : rows(original.rows), cols(original.cols), data(original.data) {
    // TODO: Create a deep copy of the original matrix
}




// 2. Operator Overloads

template<typename T>
bool Matrix<T>::operator==(const Matrix& rhs) const {
    (void)rhs;
    // TODO: Return true if both matrices have the same dimensions and equal cell values
    return rows == rhs.rows && cols == rhs.cols && data == rhs.data;
}

template<typename T>
Matrix<T> Matrix<T>::operator+(const Matrix& rhs) const {
    (void)rhs;
    // TODO: Element-wise addition.
    // If dimensions do not match, return a 1x1 matrix containing T() (0).
    if (rows != rhs.rows || cols != rhs.cols) {
        return Matrix<T>(1, 1);
    }
    Matrix<T> result(rows, cols);
    for (size_t r = 0; r < rows; ++r) {
        for (size_t c = 0; c < cols; ++c) {
            result(r, c) = data[r][c] + rhs(r, c);
        }
    }
    return result;
}

template<typename T>
Matrix<T> Matrix<T>::operator-(const Matrix& rhs) const {
    (void)rhs;
    // TODO: Element-wise subtraction.
    // If dimensions do not match, return a 1x1 matrix containing T() (0).
    if (rows != rhs.rows || cols != rhs.cols) {
        return Matrix<T>(1, 1);
    }
    Matrix<T> result(rows, cols);
    for (size_t r = 0; r < rows; ++r) {
        for (size_t c = 0; c < cols; ++c) {
            result(r, c) = data[r][c] - rhs(r, c);
        }
    }
    return result;
}

template<typename T>
Matrix<T> Matrix<T>::operator*(const Matrix& rhs) const {
    (void)rhs;
    // TODO: Standard matrix multiplication (rows x rhs.cols).
    // If cols != rhs.rows, return a 1x1 matrix containing T() (0).
    if (cols != rhs.rows) {
        return Matrix<T>(1, 1);
    }
    Matrix<T> result(rows, rhs.cols);
    for (size_t r = 0; r < rows; ++r) {
        for (size_t c = 0; c < rhs.cols; ++c) {
            for (size_t k = 0; k < cols; ++k) {
                result(r, c) += data[r][k] * rhs(k, c);
            }
        }
    }
    return result;
}

template<typename T>
T& Matrix<T>::operator()(size_t r, size_t c) {
    // TODO: Return a reference to cell (r, c)
    return data[r][c];
}

template<typename T>
const T& Matrix<T>::operator()(size_t r, size_t c) const {
    // TODO: Return a const reference to cell (r, c)
    return data[r][c];
}

// 3. Utility Functions

template<typename T>
Matrix<T> Matrix<T>::transpose() const {
    // TODO: Return a new transposed matrix of dimensions (cols x rows)
    Matrix<T> result(cols, rows);
    for (size_t r = 0; r < rows; ++r) {
        for (size_t c = 0; c < cols; ++c) {
            result(c, r) = data[r][c];
        }
    }
    return result;
}

template<typename T>
size_t Matrix<T>::getNumRows() const {
    // TODO: Return number of rows
    return rows;
}

template<typename T>
size_t Matrix<T>::getNumCols() const {
    // TODO: Return number of columns
    return cols;
}

template<typename T>
void Matrix<T>::display() const {
    // TODO: Print the matrix row by row to std::cout
    // Elements in each row should be space-separated, followed by a newline.
    for (size_t r = 0; r < rows; ++r) {
        for (size_t c = 0; c < cols; ++c) {
            if (c > 0) {
                std::cout << " ";
            }
            std::cout << data[r][c];
        }
        std::cout << '\n';
    }
}

// ============================================================================
// Explicit template instantiations (do not remove)
// These allow testing Matrix with int, double, and long long across files.
// ============================================================================
template class Matrix<int>;
template class Matrix<double>;
template class Matrix<long long>;
