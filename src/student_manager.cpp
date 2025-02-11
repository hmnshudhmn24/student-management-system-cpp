#include "student_manager.h"
#include <iostream>

using namespace std;

void StudentManager::addStudent() {
    Student newStudent;
    cout << "Enter Student ID: ";
    cin >> newStudent.id;
    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin, newStudent.name);
    cout << "Enter Student Age: ";
    cin >> newStudent.age;
    students.push_back(newStudent);
    cout << "Student added successfully!\n";
}

void StudentManager::displayStudents() const {
    if (students.empty()) {
        cout << "No students available.\n";
        return;
    }
    cout << "Student List:\n";
    for (const auto& student : students) {
        cout << "ID: " << student.id << ", Name: " << student.name << ", Age: " << student.age << "\n";
    }
}

void StudentManager::searchStudent() const {
    string keyword;
    cout << "Enter student name to search: ";
    cin.ignore();
    getline(cin, keyword);

    bool found = false;
    for (const auto& student : students) {
        if (student.name.find(keyword) != string::npos) {
            cout << "Found: ID: " << student.id << ", Name: " << student.name << ", Age: " << student.age << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "No matching students found.\n";
    }
}

void StudentManager::deleteStudent() {
    int studentId;
    cout << "Enter Student ID to delete: ";
    cin >> studentId;

    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->id == studentId) {
            students.erase(it);
            cout << "Student deleted successfully.\n";
            return;
        }
    }
    cout << "Student not found.\n";
}
