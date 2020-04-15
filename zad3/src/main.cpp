/*
Дана действительная квадратная матрица порядка n. 
Найти и вывести наибольшее из значений элементов, 
расположенных в заштрихованной части матрицы: 
Матрица размещается в памяти динамически с помощью операции new, 
значение n вводится по запросу с клавиатуры. 
В конце работы программы освободить выделенную память. 
Вывести исходную матрицу.
*/

#include <iostream>
#include "../include/Matrix.h"

int main() {
    // Matrix order
    int n;
    // Matrix element
    int a;
    
    std::cin >> n;
    
    Matrix matrix(n);
    
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            std::cin >> a;
            matrix.fill_matrix (&i, &k, &a);
        }
    }
    
    matrix.fill_triangle();
    matrix.print_matrix();
    matrix.find_max();
    
    return 0;
}
