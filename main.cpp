#include <iostream>
#include "db.h"
#include "ClearScreen.h"

void main_menu(db & data);

void clear_cin()
{
	std::cin.clear();
	const auto c_int_max = std::numeric_limits<std::int32_t>::max();
	std::cin.ignore(c_int_max, '\n');
}


int main()
{
	db data;
	std::cout << "hello\n";
	main_menu(data);
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF); //checks for memoryleaks
	return 0;
}

void main_menu(db & data)
{

	int input = 0;
	while (input != 9)
	{

		std::cout << "1.) Neuen Kunden eingeben\n"
			"2.) Neuen Lieferanten anlegen\n"
			"3.) Bestellung anlegen\n"
			"4.) Kunden anzeigen\n"
			"5.) Lieferanten anzeigen\n"
			"6.) Kunde per Name suchen\n"
			"9.) BEENDEN\n";
		std::cin >> input;
		clear();
		switch (input)
		{
		case 1: 
			{
			std::string lastName;
			std::cin >> lastName;
			Customer2 customer;
			customer.setLastName(lastName.c_str());
			data.add_customer(customer);
			break; 
			}
		case 2:
			{
			std::string lastName;
			std::cin >> lastName;
			Vendor vendor;
			vendor.setLastName(lastName.c_str());
			data.add_vendor(vendor);
			break;
			}
		case 3:
		{
			int vendor, customer;
			std::cin >> vendor;
			std::cin >> customer;
			Order order;
			if (!data.customer_exists(customer))
			{
				std::cerr << "Kunde existiert nicht\n";
				break;
			}
			//if()
			//{
			//	std::cerr << "Lieferant existiert nicht\n";
			//	break;
			//}
			data.add_order(order);
			break;
		}
		case 6:
			{
			std::string name;
			std::cin >> name;
			Customer2 found;
			if (data.find_customer(name, &found))
				std::cout << found.get_index() << ' ' << found.getLastName();
			else
				std::cout << "nicht gefunden\a";
			break;
			
			}

		default:;
		}
		


	}


}
