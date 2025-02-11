#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include "student.h"
#include <vector>

class StudentManager {
private:
    std::vector<Student> students;

public:
    void addStudent();
    void displayStudents() const;
    void searchStudent() const;
    void deleteStudent();
};

#endif // STUDENT_MANAGER_H
