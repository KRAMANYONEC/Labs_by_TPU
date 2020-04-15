#include <iostream>
#include <algorithm>

#include "../include/Matrix.h"

Matrix::Matrix ( int n) {
    // Setting order of a matrix
    _order = n;
    
    // Memory alotment
    _ptrMatrix = new int * [_order];
    for (int i = 0; i < _order; i++) {
        _ptrMatrix[i] = new int [_order];
    }
}

Matrix:: ~Matrix() {
    // Memory deallocation
    for (int i = 0; i < _order; i++) {
        delete [] _ptrMatrix[i];
    }
}

void Matrix::print_matrix() {
    std::cout << '\n';
    for (int i = 0; i < _order; i++) {
        for (int k = 0; k < _order; k++) {
            std::cout << _ptrMatrix[i][k] << " ";
        }
        std::cout << '\n';
    }
}

void Matrix::fill_matrix ( int * i, int * k, int * a ) {
            _ptrMatrix[*i][*k] = *(a);
}

// Fills set with elements of 
// hatched region (triangle) of matrix
void Matrix::fill_triangle () {
    int ser = _order / 2;
    for (int i = _order - 1; i >= ser; i--) {
        for (int k = (_order - 1 - i); k <= i; k++) {
            _elements.insert(_ptrMatrix[i][k]);
        }
    }
}

// Find ,maximum element in hatched region
// for using std::max_element it is 
// necessary to include <algorithm>
void Matrix::find_max () {
    std::cout << '\n' 
              << *(std::max_element(_elements.begin(), _elements.end()));
}
