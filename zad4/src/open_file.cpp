#include <iostream>
#include <fstream>

void open_file ( std::string & filename
               , std::ifstream & ifs) {
   ifs.open( filename );
   if ( !ifs ) {
       std::cout << "Cannot open file " 
                 << filename << '\n';
   }
} 
