#include <iostream>

#include "arProgression.h"
#include "geProgression.h"
#include "fiSequence.h"
#include "primeSequence.h"
#include "itFactorial.h"
#include "longFactorial.h"

int main()
{
    std::cout << "=========================" << std::endl;
    std::cout << "Arithmetical progression" << std::endl;
    std::unique_ptr<arProgression<double>> ar = std::make_unique<arProgression<double>>(10, 0, 1.1);
    for ( ; !ar->it->isOver(); ar->it->next()) {
        std::cout << ar->it->value() << std::endl;
    }
    std::cout << ar->it->value() << std::endl;

    ar->it->move_to_end();
    for ( ; !ar->it->isOver(); ar->it->previous()) {
        std::cout << ar->it->value() << std::endl;
    }

    ar->it->move_to(9);
    std::cout << ar->it->value() << std::endl;

    std::cout << "=========================" << std::endl;
    std::cout << "Geomethrical progression" << std::endl;
    std::unique_ptr<geProgression<double>> ge = std::make_unique<geProgression<double>>(10, 1, 2);
    for ( ; !ge->it->isOver(); ge->it->next()) {
        std::cout << ge->it->value() << std::endl;
    }

    std::cout << "=========================" << std::endl;
    std::cout << "Fibonacci sequence" << std::endl;
    std::unique_ptr<fiSequence<int>> fi = std::make_unique<fiSequence<int>>(10, -1);
    for ( ; !fi->it->isOver(); fi->it->next()) {
        std::cout << fi->it->value() << std::endl;
    }

    std::cout << "=========================" << std::endl;
    std::cout << "Prime sequence" << std::endl;
    std::unique_ptr<primeSequence<int>> prime = std::make_unique<primeSequence<int>>(10);
    for ( ; !prime->it->isOver(); prime->it->next()) {
        std::cout << prime->it->value() << std::endl;
    }

    std::cout << "=========================" << std::endl;
    std::cout << "Factorial with operator overloading (max capacity = 21)" << std::endl;
    itFactorial itf(21);
    for ( ; !itf.isOver(); itf++) {
        std::cout << *itf << std::endl;
    }

    std::cout << "=========================" << std::endl;
    std::cout << "Factorial with max capacity = 87" << std::endl;
    std::unique_ptr<longFactorial> lf = std::make_unique<longFactorial>(87);
    for ( ; !lf->it->isOver(); lf->it->next()) {
        lf->it->value();
    }
    return 0;
}
