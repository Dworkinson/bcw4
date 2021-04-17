#include "Item.h"

std::set<std::string> Item::items;
// std::map<std::string, std::set<std::string>> Item::items;

void Item::validate(Category& category)
{
	auto search = Category::categories.find(category.description);
	if (search == Category::categories.end()) {
		throw WrongCategory();
	}
}


Item::Item(Category& category, const std::string& product) : category(category), product(product)
{
	validate(category);
	Item::items.emplace(product);
	// Item::items.emplace(category.description, );	
	category.products->emplace(product);
}

Item::~Item()
{
	category.products->erase(product);
}

void Item::showItems()
{
	typename std::set<std::string>::iterator it = Item::items.begin();

	std::cout << "Items:" << std::endl;
	for ( int i = Item::items.size(); i > 0; it++, i-- ) {
		std::cout << "\t" << *it << std::endl;
	}
}
