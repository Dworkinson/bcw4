#pragma once

#include <iostream>
#include <memory>
#include <set>

class Order;

class Customer
{
public:
	std::string customer;
	static std::set<std::string> customers;
	std::unique_ptr<std::set<int>> myOrders;

	Customer(const std::string& customer);
	~Customer();

	void showMyOrders();
	static void showCustomers();
};
