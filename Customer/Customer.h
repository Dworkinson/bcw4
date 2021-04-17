#pragma once

#include <iostream>

class Customer
{
public:
	std::string name;
	static std::set<std::string> customers;
	std::set<std::string> orders;

	Customer(const std::string& name);
	~Customer();

	void showOrders();
	static void showCustomers();
};
