#include "Passport.h"
#include <string>

int     Passport::uniqueId          = 1;
char    Passport::passportSeria[2]  = {'A', 'A'};
std::set<std::string> Passport::allId;


void Passport::setSeria(char a, char b, int newId)
{
    if ( a < 'A' || a > 'Z' ) { throw WhongSeria(); }
    if ( b < 'A' || b > 'Z' ) { throw WhongSeria(); }

    Passport::passportSeria[0] = a;
    Passport::passportSeria[1] = b;

    Passport::uniqueId = newId;
}

std::string toString(char a, char b, int id)
{
    std::string idStiring = std::to_string(id);

    return idStiring + a + b;
}

void Passport::idValidate(char a, char b, int id)
{
    if ( allId.find(toString(a, b, id)) != allId.end()) {throw SameId(); }
}

Passport::Passport(const std::string& name, const std::string& lastName, int day, int month, int year) : firstName(name), lastName(lastName)
{   
    if ( uniqueId == 1000000 )
    {
        uniqueId = 1;
        passportSeria[1] += 1;

        if ( passportSeria[1] > 'Z' )
        {
            if ( passportSeria[0] == 'Z' ) { throw EndOfUniquesId(); }

            passportSeria[1] = 'A';
            passportSeria[0] += 1;
        }
    }


    birthDay    = std::make_unique<Date>(day, month, year);
    id          = uniqueId;
    seria[0]    = Passport::passportSeria[0]; seria[1]    = Passport::passportSeria[1];
    uniqueId    += 1;

    idValidate(seria[0], seria[1], id);

    allId.emplace(toString(seria[0], seria[1], id));
}

Passport::~Passport() {}

void Passport::show()
{
    std::cout << "--------------------" << std::endl;
    std::cout << firstName << " " << lastName << std::endl;

    std::cout << "Passport: "; printf("%06d ", id);
    std::cout << seria[0] << seria[1] << std::endl;
    std::cout << "Birthday: "; birthDay->show();
    std::cout << "--------------------" << std::endl;
}
