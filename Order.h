#pragma once
#include "Table.h"
class Order :
	public Table
{
private:
	int customer_;
	int vendor_;
public:
	Order();
	~Order();
	void set_vendor(int vendor) ;
	bool setCustomer(int customer) { customer_ = customer; };
	int getCustomer() const { return customer_; }
};

