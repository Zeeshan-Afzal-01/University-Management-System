#include "teacher.h"
#include<iostream>
teacher::teacher()
{
	teacherid = 0;
}
teacher::teacher(char* teacherid, char* name, int age) : person(name, age)
{
	int length = 0;
	while (teacherid[length] != '\0')
	{
		length++;
	}
	this->teacherid = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->teacherid[i] = teacherid[i];
	}
	this->teacherid[length] = '\0';
}

void teacher::setteacherid(char* teacherid)
{
	int length = 0;
	while (teacherid[length] != '\0')
	{
		length++;
	}
	delete[] this->teacherid; // Deallocate previous memory

	this->teacherid = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->teacherid[i] = teacherid[i];
	}
	this->teacherid[length] = '\0';
}

teacher::teacher(teacher& other)
{
	int length = 0;
	while (other.teacherid[length] != '\0')
	{
		length++;
	}
	teacherid = new char[length + 1];
	for (int i = 0;i < length;i++)
	{
		teacherid[i] = other.teacherid[i];
	}
	teacherid[length] = '\0';
}



char* teacher::getteacherid()
{
	return teacherid;
}

void teacher::taughtcourses(course& Course)
{
	course* new_taught_course = new course[num_of_Courses + 1];
	for (int i = 0;i < num_of_Courses;i++)
	{
		new_taught_course[i] = taught_Course[i];
	}
	new_taught_course[num_of_Courses] = Course;

	delete[] taught_Course;

	taught_Course = new_taught_course;
	num_of_Courses++;
}
void teacher::display() const
{
	
	std::cout << "Teacher ID: " << teacherid << std::endl;
	person::display();
		std::cout << "Taught Courses: " << std::endl;
	for (int i = 0;i < num_of_Courses;i++)
	{
		std::cout <<"\t"<< i + 1 << ") " << taught_Course[i].getname() << "\tCredit Houra: " << taught_Course[i].getcredit_hours() << std::endl;
	}
	std::cout << std::endl;
}