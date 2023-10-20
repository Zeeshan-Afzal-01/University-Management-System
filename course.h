#pragma once
class course
{
private:
	char* name;
	int credit_hours;
public:
	course();
	course(char* name, int credit_hours);
	course(course& other);

	void setname(char* name);
	void setcredit_hours(int credit_hours);

	char* getname();
	int getcredit_hours();
};

