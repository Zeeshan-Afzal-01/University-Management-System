#include "course.h"
course::course()
{
	name = nullptr;
	credit_hours = 0;
}
course::course(char* name, int credit_hours)
{
	int length = 0;
	while (name[length] != '\0')
	{
		length++;
	}
	this->name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->name[i] = name[i];
	}
	this->name[length] = '\0';

	this->credit_hours = credit_hours;
}


course::course(course& other)
{
	int length = 0;
	while (other.name[length] != '\0')
	{
		length++;
	}
	this->name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->name[i] = other.name[i];
	}
	this->name[length] = '\0';

	this->credit_hours = other.credit_hours;
}


void course::setname(char* name)
{
	delete[] this->name; // Deallocate previous memory
	int length = 0;
	while (name[length] != '\0')
	{
		length++;
	}
	this->name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->name[i] = name[i];
	}
	this->name[length] = '\0';
}


void course::setcredit_hours(int credit_hours)
{
	this->credit_hours = credit_hours;
}

char* course::getname()
{
	return name;
}
int course::getcredit_hours()
{
	return credit_hours;
}