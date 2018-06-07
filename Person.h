#pragma once

#include <iostream>
#include <string>
#include <cstdio>
#include <sstream>
#include <cstring>
#include "copy.h"
#include "Table.h"

class Person:public Table
{
public:
    Person();
    ~Person();

    Person(const char* first_name, const char* last_name, int year);
    Person(const Person& person);
    Person& operator=(Person& person);

	Person(Person&&) = delete; // Verschiebekonstruktor nicht implementiert
	Person& operator=(Person&&) = delete; // Verschiebezuweisung nicht implementiert

    bool setFirstName(const char* first_name);
    bool setLastName(const char* last_name);
    bool setYearOfBirth(const int year);
    bool display();

    char* getFirstName() const;
    char* getLastName() const;
    int getYearOfBirth();

private:
    char* first_name_;
    char* last_name_;
    int year_of_birth_;
	bool operator==(Person& theOtherPerson)
	{
		if (std::strcmp(first_name_, theOtherPerson.getFirstName()) == 0 &&
			std::strcmp(last_name_, theOtherPerson.getLastName()) &&
			year_of_birth_ == theOtherPerson.getYearOfBirth() )
			return 1;
		else
			return 0;
	}
};

