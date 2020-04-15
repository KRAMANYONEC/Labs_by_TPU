/*  
 *  Example of bitodrocherstvo.
 *  It shows how to apply bitwise operators
 */

#include <iostream>

int main() {
    // Moving left
    unsigned int x = 4; // size of unsigned int = 4 bytes
    
    // 4 = 00000000 00000000 00000000 00000100 -> move left for 1 bit
    // 00000000 00000000 00000000 00001000 = 8
    x = x << 1; 
    std::cout << x << '\n'; 
    /////////////////////////////////////////////////////////
    
    // Implementation of bitwise NOT
    unsigned short int a = 3; // size = 2 bites
    
    // 3 = 00000000 00000011 -> not 3:
    // 11111111 11111100 = 65532
    unsigned short int nota = ~a;
    unsigned int a1 = 3;
    
    // 3 = 00000000 00000000 00000000 00000011
    // 11111111 11111111 11111111 11111100 = 4294967292
    unsigned int nota1 = ~a1;
    
    std::cout << a << '\n' << nota << '\n'
              << a1 << '\n' << nota1 << '\n';
    ////////////////////////////////////////////////////////////
    
    // Implementation of bitwise OR
    // 5 = 0101
    // 6 = 0110
    // ||||||||
    // 7 = 0111
    a = 5;
    a1 = 6;
    std::cout << (a | a1) << '\n';
    ///////////////////////////////////////////////////////////////
    
    // Implementation of bitwise AND
    // 5 = 0101
    // 6 = 0110
    // &&&&&&&&
    // 4 = 0100
    a = 5;
    a1 = 6;
    std::cout << (a & a1) << '\n';
    ///////////////////////////////////////////////////////////////
    
    // Implementation of bitwise XOR
    // 1 = 0 0 0 1
    // 3 = 0 0 1 1
    // 7 = 0 1 1 1
    // ^^^^^^^^^^^
    // 5 = 0 1 0 1 
    // XOR returns TRUE in case of odd number of 1 in expression
    a = 1;
    a1 = 3;
    int a2 = 7;
    std::cout << (a ^ a1 ^ a2) << '\n';
    ////////////////////////////////////////////////////////////////
    
    return 0;
}
