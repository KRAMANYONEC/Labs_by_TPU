#include <regex>

#include "../include/Students.h"

void fill_struct (std::string & str 
                , Students & Student ) {
    // Results of comparison between 
    // regular expression and string from file
    std::cmatch res1;
    std::cmatch res2;
    
    // Find a name of a student from the data file
    std::regex regName("\\S*");
    std::regex_search(str.c_str(), res1, regName);
    
    Student.name = res1[0];
    
    // Find residence of a student 
    
    // the first regex searchs words, containing information
    // about place
    std::regex regPlace1("[^\\S*]\\D*[^\\s\\d]");
    std::regex_search(str.c_str(), res2, regPlace1);
    
    Student.place = res2[0];
    
    // the second regex deletes excess whitespace from the beginning
    std::regex regPlace2("[^\\s]\\D*");
    std::regex_search(Student.place.c_str(), res2, regPlace2);
    Student.place = res2[0];
       
    // Find all of student's marks
    std::regex regMarks("\\d");
    auto words_begin = std::sregex_iterator(str.begin()
                                          , str.end(), regMarks);
    auto words_end = std::sregex_iterator();
    
    int j = 0;
    for (std::sregex_iterator i = words_begin; i != words_end; ++i) {
        std::smatch match = *i;                                                 
        std::string match_str = match.str();
        Student.marks[j] = std::stoi(match_str.c_str());
        j++;
    }
}
 
