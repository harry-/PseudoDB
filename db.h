#pragma once
#include "Customer2.h"
#include <list>
#include <iterator>
#include "Vendor.h"
#include "Order.h"

class db
{
private:

	std::list<Customer2> customers_;
	std::list<Vendor> vendors_;
	std::list<Order> orders_;

	template<typename T>
	void display(T listtype);






public:
	db();
	~db();
	Customer2 add_customer(Customer2 & customer);
	bool add_vendor(Vendor& vendor);
	bool add_order(Order& order);
	bool customer_exists(int index);
	bool find_customer(const std::string& name, Customer2 * found);
};

