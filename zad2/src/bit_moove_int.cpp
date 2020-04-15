// Changes the 4th bit of int to "1"
void bit_moove_int ( int * newInt ) {
    *(newInt) = (*(newInt) | ( 1 << 4 ));
} 
