void char_to_int ( unsigned char old, int * newInt, bool * isInt) {
    if ( static_cast<int>(old) >= 48 &&
        static_cast<int>(old) <= 57 ) {
        *(newInt) = static_cast<int>(old) - 48;
        *(isInt) = 1;
    }
    else *(isInt) = 0;
}  
