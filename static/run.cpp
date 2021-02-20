#include <iostream>
#include "Passport.h"
#include "Countable.h"


int main(int argc, char const *argv[])
{
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
    // std::unique_ptr<Passport> pass4 = std::make_unique<Passport>("X Æ A-12", "Musk", 9, 5, 2020);
    // pass4->show();


    return 0;
}
