#pragma once
#include"department.h"
#include"student.h"
#include"teacher.h"

static const int MAX_DEPARTMENTS = 100;
static const int MAX_STUDENTS = 1000;
static const int MAX_TEACHERS = 100;

class University {
private:
    department Departments[MAX_DEPARTMENTS];
    int numDepartments;
    student Students[MAX_STUDENTS];
    int numStudents;
    teacher Teachers[MAX_TEACHERS];
    int numTeachers;

public:
    University();
    void addDepartment(const department& Department);
    void addStudent(const student& Student);
    void addTeacher(const teacher& Teacher);
    void displayUniversityInfo() const;
};


