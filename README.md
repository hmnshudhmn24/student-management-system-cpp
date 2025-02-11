# Student Management System

A simple **C++ Student Management System** that allows users to:

- Add students
- Display all students
- Search for a student by name
- Delete a student

## Project Structure
```
student_management_system/
│── include/
│   ├── student.h
│   ├── student_manager.h
│── src/
│   ├── student.cpp
│   ├── student_manager.cpp
│── main.cpp
│── README.md
```

## How to Compile and Run
1. Open a terminal and navigate to the project directory.
2. Compile the project using:
   ```sh
   g++ main.cpp src/student_manager.cpp -o student_management
   ```
3. Run the executable:
   ```sh
   ./student_management
   ```

## Requirements
- C++ compiler (GCC, Clang, MSVC)
