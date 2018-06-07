#pragma once
#include "Person.h"
class Customer2 :
	public Person
{
private:
	static int derived_count_;
public:
	Customer2();
	~Customer2();

	Customer2& operator=(Customer2& customer);

	int get_count() override;
	int raise_count() override;

	Customer2(const Customer2 & original) : Person(original)
	{
		
	}
};

