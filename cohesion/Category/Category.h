#pragma once

#include <iostream>
#include <set>
#include <memory>

class SameCategory{};

class Item;

class Category
{
private:
	void validate(const std::string& category);

public:
	static std::set<std::string> categories;
	std::string category;
	std::unique_ptr<std::set<std::string>> products;

	Category(const std::string& category);
	~Category();

	void showProduction();

	static void showCategories();
};
