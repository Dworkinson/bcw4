#include "Item.h"

std::vector<std::pair<std::string, std::string>> Item::items;

void Item::validate(std::string item)
{
	typename std::vector<std::pair<std::string, std::string>>::iterator it = Item::items.begin();

	for ( int i = Item::items.size(); i > 0 ; it++, i-- ){
		if (it->second == item) {
			throw SameProduct();			
		}
	}
}


Item::Item(Category& category, const std::string& item) : category(category), item(item)
{
	validate(item);

	Item::items.emplace_back(std::make_pair(category.category, item));
	category.products->emplace(item);
}

Item::~Item()
{
	category.products->erase(item);
}

void Item::showItems()
{
	std::sort(Item::items.begin(), Item::items.end());

	typename std::vector<std::pair<std::string, std::string>>::iterator it = Item::items.begin();

	std::cout << "============================" << std::endl;
	std::cout << "Category / Item in category" << std::endl;
	std::cout << "----------------------------" << std::endl;
	for ( int i = Item::items.size(); i > 0 ; it++, i-- ) {
		std::cout << it->first << " / " << it->second << std::endl;
	}
	std::cout << "============================" << std::endl;
}
