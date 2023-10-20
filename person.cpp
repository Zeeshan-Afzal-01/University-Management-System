#include "person.h"
#include<iostream>
person::person()
{
	name = nullptr;
	age = 0;

}
person::person(char* name, int age)
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

	this->age = age;
}


person::person(person& other)
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

	this->age = other.age;
}


void person::setname(char* name)
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


void person::setage(int age)
{
	this->age = age;
}

char* person::getname()
{
	return name;
}

int person::getage()
{
	return age;
}
void person::display() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
}