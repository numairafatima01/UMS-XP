#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(string n, string r, string p, float c) {
    name = n;
    rollNo = r;
    program = p;
    cgpa = c;
}

void Student::displayProfile() {
    cout << "\n--- Academic Profile ---\n";
    displayBasicInfo();
    cout << "Program: " << program << endl;
    cout << "CGPA: " << cgpa << endl;
}
void Student::displayBasicInfo() {
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
}
string Student::getName() {
    return name;
}