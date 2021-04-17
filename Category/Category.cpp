#include "Category.h"

std::set<std::string> Category::categories;

void Category::validate(const std::string& description)
{
	auto search = Category::categories.find(description);
	if (search != Category::categories.end()) {
		throw SameCategory();
	}
}

Category::Category(const std::string& description) : description(description)
{
	validate(description);
	products = std::make_unique<std::set<std::string>>();
	Category::categories.emplace(description);
}

Category::~Category() = default;

void Category::showProduction()
{
	typename std::set<std::string>::iterator it = products->begin();
	std::cout << "=========================" << std::endl;
	std::cout << "Products in category \"" << this->description << "\": " << std::endl;
	for ( int i = products->size(); i > 0; it++, i-- ) {
		std::cout << "\t" << *it << std::endl; 
	}
	std::cout << "=========================" << std::endl;
}

void Category::showCategories()
{
	typename std::set<std::string>::iterator it = Category::categories.begin();
	std::cout << "=========================" << std::endl;
	std::cout << "Categoryes:" << std::endl;
	for ( int i = Category::categories.size(); i > 0; it++, i-- ) {
		std::cout << "\t" << *it << std::endl; 
	}
	std::cout << "=========================" << std::endl;
}
