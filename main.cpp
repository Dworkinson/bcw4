#include <iostream>
#include <memory>

#include "Category/Category.h"
#include "Item/Item.h"

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
	std::map<std::string, std::set<std::string>> asd;

	// asd.emplace(milk.description, );
	return 0;
}
