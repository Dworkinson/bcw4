#pragma once

#include <iostream>
#include <set>
#include <memory>

class SameCategory{};

class Item;

class Category
{
private:
	void validate(const std::string& description);

public:
	static std::set<std::string> categories;
	std::string description;
	std::unique_ptr<std::set<std::string>> products;

	Category(const std::string& description);
	~Category();

	void showProduction();

	static void showCategories();
};
