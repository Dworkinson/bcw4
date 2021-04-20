#pragma once

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <memory>

#include "../Customer/Customer.h"
#include "../Item/Item.h"

class WrongCustomer{};

class Order
{
private:
    Customer& customer;
    void validate(Customer& customer);

public:
    static std::vector<std::pair<std::string, int>> orders;
    static int enumeration;
    int id;
    std::unique_ptr<std::set<std::string>> order;

    Order(Customer& customer);
    ~Order();
    
    void addItem(Item& item);
    void eraseItem(Item& item);

    void checkOrder();

    static void showOrders();
};
