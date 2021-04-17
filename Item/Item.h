#pragma once

#include <iostream>
#include <set>
#include <map>

#include "../Category/Category.h"

class WrongCategory{};

class Item
{
private:
	Category& category;
	void validate(Category& description);


public:
	static std::set<std::string> items;
	// static std::map<std::string, std::set<std::string>> items;

	std::string product;

	Item(Category& description, const std::string& product);
	~Item();
	
	static void showItems();
	void removeSelf();
};
