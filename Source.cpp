#include"course.h"
#include"department.h"
#include"student.h"
#include"teacher.h"
#include"university.h"
int main() {
  
    University university;

   
    char c1[] = "OOP (L)";
    char c2[] = "DATA Structure and Algorithum";
    char c3[] = "OOP";
    char c4[] = "Operating System";

    course course1(c1, 1);
    course course2(c2, 3);
    course course3(c3, 3);
    course course4(c4, 3);

  
    char d1[] = "Software Engineering";
    department Department(d1);
    Department.add_course(course1);
    Department.add_course(course2);
    Department.add_course(course3);
    Department.add_course(course4);

    
    university.addDepartment(Department);


    char s1[] = "L1S22BSSE0174";
    char s1n[] = "Zeeshan Afzal";
    student student1(s1,s1n,20);
    student1.enrolledcourse(course1);
    student1.enrolledcourse(course3);
    Department.add_course(course2);


    char s2[] = "L1S22BSSE0116";
    char s2n[] = "Ahmad Naeem";
    student student2(s2, s2n, 20);
    student2.enrolledcourse(course2);
    student2.enrolledcourse(course3);
    Department.add_course(course4);


    university.addStudent(student1);
    university.addStudent(student2);

    \
    char t1[] = "FL452";
    char t1n[] = "Hira Naveed";
    teacher teacher1(t1,t1n,25);
    teacher1.taughtcourses(course1);


    char t2[] = "F1000";
    char t2n[] = "Mohsin Sami";
    teacher teacher2(t2,t2n,40);
    teacher2.taughtcourses(course2);
    teacher2.taughtcourses(course3);

    
    university.addTeacher(teacher1);
    university.addTeacher(teacher2);

    
    university.displayUniversityInfo();

    return 0;
}