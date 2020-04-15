#include <iostream>

int main () {
    int n;
    
    std::cin >> n;
    
    int ** ptrMatrix = new int * [n];
    for (int i = 0; i < n; i++) {
        ptrMatrix[i] = new int [n];
    }
    
     for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            std::cout << ptrMatrix[i][k] << " ";
        }
        std::cout << '\n';
    }
    
    for (int i = 0; i < n; i++) {
        delete [] ptrMatrix[i];
    }
    
    
    return 0 ;
}
