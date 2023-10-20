#pragma once
#include"person.h"
#include"course.h"
class teacher : public person
{
private:
	char* teacherid;
	course* taught_Course;
	int num_of_Courses;
public:
	teacher();
	teacher(char* teacherid, char* name, int age);
	teacher(teacher& other);

	void setteacherid(char* teacherid);
	char* getteacherid();

	void taughtcourses(course& Course);

	void display() const override;
};

