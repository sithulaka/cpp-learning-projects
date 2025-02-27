#include <iostream>

using namespace std;

int i = 0;
short marks;
char grade;

string subject[] = {"mathematics", "sinhala", "english", "tamil", "histry", "ict", "commerce" , "science", "music"};

char cal_grades(short subject_marks);

int main() {

    short* subject_marks = new short [9];

    while (i < 9) {

        cout << "Enter marks for " << subject[i] << " : " << flush;
        cin >> marks;

        if (marks > 100 || marks < 0) {
            
            cout << "Invalid Marks! Exam Marks Should Be Between 0 and 100." <<endl;
            continue;

        }
        subject_marks [i] = marks;
        i++; 
    }
    
    cout<<endl;

    for(int i = 0; i < 9; i++) {

        grade = cal_grades(subject_marks[i]);
        cout << "You Got \'" << grade << "\' grade for " << subject[i] << "." << endl;

    }

    delete[] subject_marks;

}