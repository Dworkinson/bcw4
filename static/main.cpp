#include <iostream>
#include <memory>

#include "Countable.h"
#include "Identifiable.h"
#include "Mohican.h"
#include "passport/Passport.h"

int main(int argc, char const *argv[])
{
    std::cout << "Countable:" << std::endl;
    std::cout << Countable::getCounter() << std::endl;
    std::unique_ptr<Countable> c1 = std::make_unique<Countable>();
    std::cout << Countable::getCounter() << std::endl;
    std::cout << "=====================" << std::endl;

    std::cout << "Identifiable:" << std::endl;
    std::unique_ptr<Identifiable> i1 = std::make_unique<Identifiable>();
    std::cout << i1->getId() << std::endl;

    std::unique_ptr<Identifiable> i2 = std::make_unique<Identifiable>();
    std::cout << i2->getId() << std::endl;
    std::cout << "=====================" << std::endl;

    std::cout << "Mohican:" << std::endl;
    std::unique_ptr<Mohican> m1 = std::make_unique<Mohican>("m1");
    Mohican::getLastMohican()->show();
    std::unique_ptr<Mohican> m2 = std::make_unique<Mohican>(*Mohican::getLastMohican());
    std::unique_ptr<Mohican> m3 = std::make_unique<Mohican>("m3");
    Mohican::getLastMohican()->show();
    std::cout << "=====================" << std::endl;

    std::cout << "Passport:" << std::endl;
    Passport::setSeria('A', 'Z', 999999);
    std::unique_ptr<Passport> pass1 = std::make_unique<Passport>("John", "Brown", 2, 2, 1980);
    pass1->show();
    // Passport::setSeria('B', 'a', 999999);//throwes WrongSeria
    // Passport::setSeria('A', 'Z', 999999);//throwes SameId
    // Passport::setSeria('Z', 'Z', 999999);//throwes EndOfUniquesId after making 1 passport
    std::unique_ptr<Passport> pass2 = std::make_unique<Passport>("Alpharius", "Omegon", 1, 1, 31792);
    pass2->show();
    std::unique_ptr<Passport> pass3 = std::make_unique<Passport>("Julius", "Caesar", 12, 9, -100);
    pass3->show();

    return 0;
}
