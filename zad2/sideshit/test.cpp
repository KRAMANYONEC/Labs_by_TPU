#include <iostream>

int main() {
    
    int a1 = 1; 
    int a2 = 2;
    int a3 = 9;
    
    char b1 = '1';
    char b2 = '2';
    char b3 = '9';
    std::cout << (b3-48) << '\n';
    
    std::cout << (a1 | (1 << 4)) << " "
              << (a2 | (1 << 4)) << " "
              << (a3 | (1 << 4)) << " "
              << ((b1 - 48) | (1 << 4)) << " "
              << ((b2 - 48) | (1 << 4)) << " "
              << ((b3 - 48) | (1 << 4)) << " ";
              
    return 0;
}
