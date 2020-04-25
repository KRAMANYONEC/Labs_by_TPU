#include <iostream> 
#include <vector>

#include "../include/Students.h"

void print_names (std::vector<Students> & students) {
    for (int i = 0; i < students.size(); i++) {
        if (students[i].meanScore >= 4) {
            std::cout << students[i].name << '\n';
        }
    }
}
