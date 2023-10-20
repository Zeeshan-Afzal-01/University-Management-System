#include "student.h"

#include<iostream>
student::student()
{
	studentid = 0;
}
student::student(char* studentid, char* name, int age) : person(name, age)
{
	int length = 0;
	while (studentid[length] != '\0')
	{
		length++;
	}
	this->studentid = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->studentid[i] = studentid[i];
	}
	this->studentid[length] = '\0';
}

student::student(student& other)
{
	int length = 0;
	while (other.studentid[length] != '\0')
	{
		length++;
	}
	studentid = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		studentid[i] = other.studentid[i];
	}
	studentid[length] = '\0';

	num_of_courses = other.num_of_courses;

	enroll_courses = new course[num_of_courses];
	for (int i = 0; i < num_of_courses; i++)
	{
		enroll_courses[i] = other.enroll_courses[i];
	}
}

void student::setstudentid(char* studentid)
{
	int length = 0;
	while (studentid[length] != '\0')
	{
		length++;
	}
	delete[] this->studentid; // Deallocate previous memory

	this->studentid = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->studentid[i] = studentid[i];
	}
	this->studentid[length] = '\0';
}

char* student::getstudentid()
{
	return studentid;
}

void student::enrolledcourse(course& Course)
{
	course* new_enrolled_course = new course[num_of_courses + 1];

	for (int i = 0; i < num_of_courses; i++)
	{
		new_enrolled_course[i] = enroll_courses[i];
	}
	new_enrolled_course[num_of_courses] = Course;

	delete[] enroll_courses;

	enroll_courses = new_enrolled_course;
	num_of_courses++;
}

void student::display() const 
{
	
	std::cout << "Student ID: " << studentid << std::endl;
	person::display();
	std::cout << "Enrolled Courses: " << std::endl;
	for (int i = 0;i < num_of_courses;i++)
	{
		std::cout <<"\t"<< i + 1 << ") " << enroll_courses[i].getname() << "\tCredit Hours: " << enroll_courses[i].getcredit_hours() << std::endl;
	}
	std::cout << std::endl;
}