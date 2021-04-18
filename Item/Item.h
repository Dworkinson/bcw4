#pragma once

#include <iostream>
#include <set>
#include <vector>

#include "../Category/Category.h"

class WrongCategory{};

class Item
{
private:
	Category& category;
	void validate(Category& description);
	static std::vector<std::string> categories;
	static std::vector<std::string> items;
	// static std::set<std::string> items; //correct design


public:
	// static std::map<std::string, std::set<std::string>> items;

	std::string product;

	Item(Category& description, const std::string& product);
	~Item();
	
	static void showItems();
	void removeSelf();
};
