/*
Bвести последовательность из 8 символов. Если символ - цифра, 
то заменить в нем 4-й бит единицей, иначе - 2-й бит нулем. 
Вывести исходную последовательность и ее восьмеричные коды;
преобразованную последовательность и ее восьмеричные коды. 
Программу можно было сделать и проще, без перевода в integer и обратно. 
Достаточно вычитания из char 48 и сдвигания битов
*/

#include <iostream>

// Converts char element of array to int variable
void char_to_int ( unsigned char old, int * newInt, bool * isInt);

// Changes the 4th bit of int to "1"
void bit_moove_int ( int * newInt );

// Changes the 2th bit of char to "0"
void bit_moove_char ( unsigned char * old );

// Converts integer variable to char variable
unsigned char  int_to_char (int * newInt, unsigned char * newChar);

int main() {
    // Array of symbols from user's input
    unsigned char old[8];
    
    int newInt;
    unsigned char newChar;
    
    // Flag
    bool isInt = 0;
    
    // Array of new symbols
    unsigned char new1[8];
    
    // Input
    for (int i = 0; i < 8; i++) {
        std::cin >> old[i];
    }
    
    // Convertation
    for (int i = 0; i < 8; i++) {
        char_to_int ( old[i], &newInt, &isInt );
        
        if (isInt) {
            bit_moove_int ( &newInt );
            new1[i] = int_to_char ( &newInt, &newChar );
        } else {
            bit_moove_char ( &(old[i]) );
            new1[i] = old[i];
        }
    }
    
    // Output
    // std::oct is using for convert code of char
    // from decimal form to octal
    for (int i = 0; i < 8; i++) {
        std::cout << std::oct << static_cast<int>(new1[i]) << "  ";
    }
 
    return 0;
}
