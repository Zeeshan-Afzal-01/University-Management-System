#pragma once
#include"person.h"
#include"course.h"
class student : public person
{
private:
	char* studentid;
	course* enroll_courses;
	int num_of_courses;
public:
	student();
	student(char* studentid, char* name, int age);
	student(student& other);

	void setstudentid(char* studentid);
	char* getstudentid();

	void enrolledcourse(course& Course);

	void display() const override ;

};

