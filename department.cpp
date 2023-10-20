#include "department.h"
#include<iostream>
department::department()
{
	name = nullptr;
	Course = nullptr;
	num_of_courses = 0;

}
department::department(char* departmentName)
{
	int length = 0;
	while (departmentName[length] != '\0')
	{
		length++;
	}
	name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->name[i] = departmentName[i];
	}
	name[length] = '\0';
}

department::department(department& other)
{
	int length = 0;
	while (other.name[length] != '\0')
	{
		length++;
	}
	name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		name[i] = other.name[i];
	}
	name[length] = '\0';

	num_of_courses = other.num_of_courses;

	Course = new course[num_of_courses];
	for (int i = 0; i < num_of_courses; i++)
	{
		Course[i] = other.Course[i];
	}
}

void department::setname(char* departmentName)
{
	int length = 0;
	while (departmentName[length] != '\0')
	{
		length++;
	}
	delete[] name; // Deallocate previous memory
	name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->name[i] = departmentName[i];
	}
	name[length] = '\0';
}


char* department::getname() const
{
	return name;
}

void department::add_course(course& Courses)
{
	course* newcourse = new course[num_of_courses + 1];
	for (int i = 0;i < num_of_courses;i++)
	{
		newcourse[i] = Course[i];
	}
	newcourse[num_of_courses] = Courses;

	delete[] Course;
	Course = newcourse;
	num_of_courses++;
}

void department::course_display()
{
	std::cout << "The Courses are: " << std::endl;
	for (int i = 0;i < num_of_courses;i++)
	{
		std::cout << "Course Name: " << Course[i].getname() << "\t Credit Hours: " << Course[i].getcredit_hours() << std::endl;
	}
}

department::~department()
{
	delete[] name;
	delete[] Course;
}