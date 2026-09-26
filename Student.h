#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string name;
    string rollNo;
    string program;
    float cgpa;

public:
    Student(string n, string r, string p, float c);

    void displayProfile();
    string getName();
    void displayBasicInfo(); 
};

#endif
