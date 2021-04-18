#include <iostream>
#include <memory>
#include <vector>
#include <map>

#include "Category/Category.h"
#include "Item/Item.h"

// void printItems(std::vector<std::string> categ, std::vector<std::string> item)
// {
// 	return;
// }

int main(int argc, char const *argv[])
{
	std::unique_ptr<Category> milk = std::make_unique<Category>("milk");
	// std::unique_ptr<Category> milk1 = std::make_unique<Category>("milk1");
	// Category *milk1 = new Category("milk1");

	std::unique_ptr<Item> jogurt = std::make_unique<Item>(*milk, "jogurt");
	std::unique_ptr<Item> cheese = std::make_unique<Item>(*milk, "cheese");


	milk->showProduction();
	Category::showCategories();
	Item::showItems();
	// delete cheese;
	// milk->showProduction();
	// jogurt->removeSelf();
	// Item::showItems();
	std::vector<std::string> categ;
	std::vector<std::string> item;
	categ.emplace(milk.description);
	// printItems(categ, item);
	// std::map<Category&, std::set<std::string>> as;

	return 0;
}
