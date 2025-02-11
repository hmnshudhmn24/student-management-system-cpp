#include "student_manager.h"
#include <iostream>

using namespace std;

int main() {
    StudentManager manager;
    int choice;

    do {
        cout << "\nStudent Management System\n";
        cout << "1. Add Student\n2. Display Students\n3. Search Student\n4. Delete Student\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: manager.addStudent(); break;
            case 2: manager.displayStudents(); break;
            case 3: manager.searchStudent(); break;
            case 4: manager.deleteStudent(); break;
            case 5: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
