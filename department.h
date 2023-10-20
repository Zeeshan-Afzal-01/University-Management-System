#pragma once
#include"course.h"
class department
{
private:
	char* name;
	course* Course;
	int num_of_courses;

public:
	department();
	department(char* name);
	department(department& other);

	void setname(char* name);
	char* getname() const;

	void add_course(course& Course);


    void course_display();

	~department();
};

