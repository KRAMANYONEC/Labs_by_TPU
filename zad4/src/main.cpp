#include <iostream>
#include <fstream>
#include <regex>
#include <vector>

 #include "../include/Students.h"

// Opens file with information about students
void open_file ( std::string * filename
               , std::ifstream & ifs);

// Closes file with information about students
void close_file ( std::ifstream & ifs );

int main() {
    // Declarate an input flow
    std::ifstream ifs;
    
    // Declare the name of data file
    std::string fileName = "data.txt";
    
    // Temporare string, fulling from data file
    std::string str;
    
    // Create an array of structures of stedents
    std::vector <Students> students;
    
    // Create a temporare input structure 
    Students Student;
    
    // Counter for number of strings in data.txt
    int stringsCount = 0;
    
    
    // Results of comparison between 
    // regular expression and string from file
    std::cmatch res1;
    std::cmatch res2;
    
    // Open dat file
    open_file ( &fileName, ifs );
    
    // Read data file into a temporare string
    while (std::getline(ifs, str)) {
        
        // Count the number of strings
        stringsCount++;
    
        std::regex regName("\\S*");
        std::regex_search(str.c_str(), res1, regName);
    
        Student.name = res1[0];
        std::cout << Student.name << '\n';
    
    
        std::regex regPlace1("[^\\S*]\\D*[^\\s\\d]");
        std::regex_search(str.c_str(), res2, regPlace1);
    
   
        Student.place = res2[0];
        std::regex regPlace2("[^\\s]\\D*");
        std::regex_search(Student.place.c_str(), res2, regPlace2);
        Student.place = res2[0];
        std::cout << Student.place << '\n';
    
        std::regex regMarks("\\d");
        auto words_begin = 
            std::sregex_iterator(str.begin(), str.end(), regMarks);
        auto words_end = std::sregex_iterator();
    
        int j = 0;
        for (std::sregex_iterator i = words_begin; i != words_end; ++i) {
            std::smatch match = *i;                                                 
            std::string match_str = match.str();
            Student.marks[j] = std::stoi(match_str.c_str());
            std::cout << Student.marks[j] << '\n';
            j++;
        }   
    }
    std::cout << "Strings number is " << stringsCount;
    close_file ( ifs );
    return 0;
}
