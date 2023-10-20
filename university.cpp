#include "university.h"
#include<iostream>
University::University() : numDepartments(0), numStudents(0), numTeachers(0) {}

void University::addDepartment(const department& Department) {
    if (numDepartments < MAX_DEPARTMENTS) {
        Departments[numDepartments] = Department;
        numDepartments++;
    }
    else {
        std::cout << "Max number of departments reached. Unable to add department.\n";
    }
}

void University::addStudent(const student& Student) {
    if (numStudents < MAX_STUDENTS) {
        Students[numStudents] = Student;
        numStudents++;
    }
    else {
        std::cout << "Max number of students reached. Unable to add student.\n";
    }
}

void University::addTeacher(const teacher& Teacher) {
    if (numTeachers < MAX_TEACHERS) {
        Teachers[numTeachers] = Teacher;
        numTeachers++;
    }
    else {
        std::cout << "Max number of teachers reached. Unable to add teacher.\n";
    }
}

void University::displayUniversityInfo() const {

    std::cout << "\t\t--------------------------------------------------\n"
        << "\t\t-         UNIVERSITY OF CENTRAL PUNJAB           -\n"
        << "\t\t--------------------------------------------------\n" << std::endl;
    std::cout << "University DataBase Information:\n";

    std::cout << "\n\t\t---->  Departments  <-----\n\n";
             
    for (int i = 0; i < numDepartments; i++) {
        std::cout << "Department Name: " << Departments[i].getname() << std::endl;
    }

    std::cout << "\n\t\t---->  Students  <-----\n\n";
        
    for (int i = 0; i < numStudents; i++) {
        Students[i].display();
    }

    std::cout << "\n\t\t----->  Teachers  <-----\n\n";
          
    for (int i = 0; i < numTeachers; i++) {
        Teachers[i].display();
    }
}
