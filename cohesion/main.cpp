#include <iostream>
#include <memory>

#include "Category/Category.h"
#include "Item/Item.h"
#include "Customer/Customer.h"
#include "Order/Order.h"

int main(int argc, char const *argv[])
{
	std::unique_ptr<Category> milk 			= std::make_unique<Category>("milk");
	std::unique_ptr<Category> stationery 	= std::make_unique<Category>("stationery");
	std::unique_ptr<Category> electronics 	= std::make_unique<Category>("electronics");

	std::unique_ptr<Item> jogurt = std::make_unique<Item>(*milk, "jogurt");
	std::unique_ptr<Item> cheese = std::make_unique<Item>(*milk, "cheese");
	std::unique_ptr<Item> yogurt = std::make_unique<Item>(*milk, "yogurt");

	std::unique_ptr<Item> reader 	= std::make_unique<Item>(*electronics, "reader");

	std::unique_ptr<Item> pen 		= std::make_unique<Item>(*stationery, "pen");
	std::unique_ptr<Item> pencil 	= std::make_unique<Item>(*stationery, "pencil");
	std::unique_ptr<Item> paper 	= std::make_unique<Item>(*stationery, "paper");

	std::unique_ptr<Item> printer 	= std::make_unique<Item>(*electronics, "printer");
	std::unique_ptr<Item> scanner 	= std::make_unique<Item>(*electronics, "scanner");
	std::unique_ptr<Item> washer 	= std::make_unique<Item>(*electronics, "washer");

	std::unique_ptr<Customer> vasili = std::make_unique<Customer>("Vasili");
	std::unique_ptr<Customer> baclan = std::make_unique<Customer>("Baclan");
	std::unique_ptr<Customer> egorca = std::make_unique<Customer>("Egorca");

	std::unique_ptr<Order> first 	= std::make_unique<Order>(*egorca);
	std::unique_ptr<Order> second 	= std::make_unique<Order>(*baclan);
	std::unique_ptr<Order> third 	= std::make_unique<Order>(*egorca);
	std::unique_ptr<Order> fourth 	= std::make_unique<Order>(*vasili);


	Category::showCategories();
	milk->showProduction();

	Item::showItems();

	Customer::showCustomers();

	Order::showOrders();
	first->addItem(*pen);

	first->checkOrder();

	first->eraseItem(*pen);
	first->checkOrder();

	return 0;
}
