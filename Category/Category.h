#pragma once

#include <iostream>
#include <set>
#include <list>
#include <map>

class SameCategory{};

class Item;

class Category
{
private:
	void validate(const std::string& description);

public:
	static std::set<std::string> categories;
	// std::map<this, >
	std::string description;
	// std::list<Item&> itemsInCategory;
	std::set<std::string> products;

	Category(const std::string& description);
	~Category();

	void showProduction();

	static void showCategories();
};
