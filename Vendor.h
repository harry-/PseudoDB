#pragma once
#include "Person.h"
class Vendor :
	public Person
{
private:
	static int derived_count_;
public:
	int get_count() override;
	int raise_count() override;
	Vendor();
	~Vendor();
};

