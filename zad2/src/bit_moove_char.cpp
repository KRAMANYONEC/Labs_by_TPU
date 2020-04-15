// Changes the 2th bit of char to "0"
void bit_moove_char ( unsigned char * old ) {
   *(old) = (*(old) & (~(1 << 2)));
} 
