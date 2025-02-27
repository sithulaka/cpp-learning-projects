#include <iostream>

using namespace std;

char cal_grades(short subject_marks) {

    if (subject_marks >= 75) return 'A';
    if (subject_marks >= 65) return 'B';
    if (subject_marks >= 55) return 'C';
    if (subject_marks >= 35) return 'S';
    else return 'W';
    
}