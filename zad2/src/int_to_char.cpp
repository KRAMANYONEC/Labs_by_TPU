// Converts integer variable to char variable
unsigned char  int_to_char (int * newInt, unsigned char * newChar) {
    *(newChar) = static_cast<char>(*newInt) + 48;
    return *newChar;
} 
