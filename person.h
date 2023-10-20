#pragma once
class person
{
private:
	char* name;
	int age;

public:

	person();
	person(char* name, int age);
	person(person& other);

	void setname(char* name);
	void setage(int age);

	char* getname();
	int getage();

	virtual void display() const;
};
