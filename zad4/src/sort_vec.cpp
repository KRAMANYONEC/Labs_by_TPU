#include <vector>
#include <algorithm> // For using std::sort 

#include "../include/Students.h"

void sort_vec( std::vector<Students>& students ) {
    // Sort vector in alphabet order by names
    // Using lambda-expression( C++ 11)
    std::sort(students.begin(), students.end()
            , [](const Students& student1, 
                 const Students& student2) -> bool { 
        return student1.name < student2.name;
        }
    );
}
