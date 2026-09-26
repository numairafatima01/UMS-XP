#include <iostream>
#include <cassert>
#include "Student.h"

using namespace std;

int main() {

    Student student(
        "Numaira Fatima",
        "BSE-3A",
        "Software Engineering",
        3.00
    );

    assert(student.getName() == "Numaira Fatima");

    cout << "Test Passed!" << endl;

    return 0;
}