#include "Customer.h"

std::set<std::string> Customer::customers;

Customer::Customer(const std::string& customer) : customer(customer)
{
    myOrders = std::make_unique<std::set<int>>();
    Customer::customers.emplace(customer);
}

Customer::~Customer() = default;

void Customer::showMyOrders()
{
    typename std::set<int>::iterator it = myOrders->begin();
    std::cout << "============================" << std::endl;
    std::cout << "Customer's orders" << this->customer << ": " << std::endl;
    for ( int i = myOrders->size(); i > 0; it++, i-- ) {
        std::cout << "\t" << *it << std::endl; 
    }
    std::cout << "============================" << std::endl;
}

void Customer::showCustomers()
{
    typename std::set<std::string>::iterator it = Customer::customers.begin();
    std::cout << "============================" << std::endl;
    std::cout << "Customers:" << std::endl;
    for ( int i = Customer::customers.size(); i > 0; it++, i-- ) {
        std::cout << "\t" << *it << std::endl; 
    }
    std::cout << "============================" << std::endl;
}
