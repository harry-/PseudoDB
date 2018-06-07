#include "db.h"
#include "algorithm"
#include <list>
#include <iterator>
#include <string>

db::db()
{
}


db::~db()
{
}

Customer2 db::add_customer(Customer2 & customer)
{
	customer.set_index(customer.get_count());
	customers_.push_back(customer);
	customer.raise_count();
	return customer;
}

bool db::add_vendor(Vendor& vendor)
{
	vendor.set_index(vendor.get_count());
	vendors_.push_back(vendor);
	vendor.raise_count();	
	return true;
}

bool db::add_order(Order& order)
{
	if(customer_exists(order.getCustomer()))
	orders_.push_back(order);
	return true;
}

bool db::customer_exists(int index)
{
	const auto iterator = std::find_if(
		std::begin(customers_), std::end(customers_),
		[&](Customer2 const& customer) { return customer.get_index() == index; });

	if (iterator == std::end(customers_))
		return false;
	return true;
}

bool db::find_customer(const std::string& name, Customer2 * found)
{
	const auto iterator = std::find_if(
		std::begin(customers_), std::end(customers_),
		[&](Customer2 const& customer) { return !(strcmp(customer.getLastName(), name.c_str())); }); 

	if (iterator == std::end(customers_))
	{
		found = nullptr;
		return false;
	}
	
	found = &*iterator;
	return true;
}


