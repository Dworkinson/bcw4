#include "Order.h"

std::vector<std::pair<std::string, int>> Order::orders;
int Order::enumeration = 0;

void Order::validate(Customer& customer)
{
    auto search = Customer::customers.find(customer.customer);
    if (search == Customer::customers.end()) {
        throw WrongCustomer();
    }
}

Order::Order(Customer& customer) : customer(customer)
{
    validate(customer);

    Order::enumeration += 1;
    id = Order::enumeration;
    order = std::make_unique<std::set<std::string>>();

    Order::orders.emplace_back(std::make_pair(customer.customer, id));
    customer.myOrders->emplace(id);
}

Order::~Order()
{
    customer.myOrders->erase(id);
}

void Order::addItem(Item& item)
{
    order->emplace(item.item);
}

void Order::eraseItem(Item& item)
{
    order->erase(item.item);
}

void Order::checkOrder()
{
    typename std::set<std::string>::iterator it = Order::order->begin();

    std::cout << "============================" << std::endl;
    std::cout << "Order #" << id << std::endl;
    std::cout << "----------------------------" << std::endl;
    for ( int i = Order::order->size(); i > 0 ; it++, i-- ) {
        std::cout << "\t" << *it << std::endl;
    }
    std::cout << "============================" << std::endl;
}

void Order::showOrders()
{
    std::sort(Order::orders.begin(), Order::orders.end());

    typename std::vector<std::pair<std::string, int>>::iterator it = Order::orders.begin();

    std::cout << "============================" << std::endl;
    std::cout << "Customer / order's id" << std::endl;
    std::cout << "----------------------------" << std::endl;
    for ( int i = Order::orders.size(); i > 0 ; it++, i-- ) {
        std::cout << it->first << " / #" << it->second << std::endl;
    }
    std::cout << "============================" << std::endl;
}
