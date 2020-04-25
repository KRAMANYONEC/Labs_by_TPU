#include <iostream>
#include <fstream>
#include <vector>

#include "../include/Students.h"

// Opens file with information about students
void open_file ( std::string & filename
               , std::ifstream & ifs);

// Closes file with information about students
void close_file ( std::ifstream & ifs );

// Fills the structure with information about 
// current student, using regular expressions
void fill_struct (std::string & str 
                , Students & Student );

// Calculates mean score for each student 
// and put the value in structure
void calc_mean_score ( Students & Student);

// Sorts elements of the vector in  
// alphabetic order
void sort_vec(std::vector<Students>& students);

// Outputs names of students, with mean score
// wich >= 4 
void print_names(std::vector<Students>& students);

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
    
    // Open data file
    open_file ( fileName, ifs );
    
    // Read data file into a temporare string
    while (std::getline(ifs, str)) {
        
        // Count the number of strings
        stringsCount++;
        
        fill_struct (str, Student);
        
        calc_mean_score (Student);
        
        // Adding the current structure 
        // to the end of array
        students.push_back(Student);
    }
    
    sort_vec( students );
    
    print_names( students);
    
    close_file ( ifs );
    
    return 0;
}
