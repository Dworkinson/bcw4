#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

#include "../Category/Category.h"

class SameProduct{};

class Order;

class Item
{
private:
	Category& category;
	void validate(std::string item);

public:
	static std::vector<std::pair<std::string, std::string>> items;
	std::string item;

	Item(Category& category, const std::string& item);
	~Item();
	
	static void showItems();
};
