#include "Item.h"

// std::set<std::string> Item::items; // correct design
std::vector<std::string> Item::items;
std::vector<std::string> Item::categories;
// std::map<std::string, std::set<std::string>> Item::items;

void Item::validate(Category& category) //item validate???
{
	auto search = Category::categories.find(category.description);
	if (search == Category::categories.end()) {
		throw WrongCategory();
	}
}


Item::Item(Category& category, const std::string& product) : category(category), product(product)
{
	validate(category);
	Item::categories.emplace(category.description);
	Item::items.emplace(product); // correct design
	// Item::items.emplace(category.description, );	
	category.products->emplace(product);

}

Item::~Item()
{
	category.products->erase(product);
}

void Item::showItems()
{
	// correct design
	// typename std::set<std::string>::iterator it = Item::items.begin();

	// std::cout << "Items:" << std::endl;
	// for ( int i = Item::items.size(); i > 0; it++, i-- ) {
	// 	std::cout << "\t" << *it << std::endl;
	// }

	// typename std::vector<std::string>::iterator itCategory 	= Item::categories.begin();
	// typename std::vector<std::string>::iterator itItems 	= Item::items.begin();

	// std::cout << "Category / item in category" << std::endl;
	// for ( int i = Item::items.size(); i > 0 ; itCategory++, itItems++, i-- ) {
	// 	std::cout << *itCategory << " / " << *itItems << std::endl;
	// }
}
	