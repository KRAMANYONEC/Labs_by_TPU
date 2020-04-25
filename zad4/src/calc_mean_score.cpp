#include "../include/Students.h"

void calc_mean_score ( Students & Student) {
    Student.meanScore = (Student.marks[0] 
                       + Student.marks[1] 
                       + Student.marks [2]) / 3.;
}
