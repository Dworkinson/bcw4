#pragma once
#include <memory>
#include <set>
#include "Date.h"

class EndOfUniquesId {};
class SameId {};
class WhongSeria {};

class Passport
{
private:
    static int uniqueId;
    static char passportSeria[];
    static std::set<std::string> allId;

    void idValidate(char a, char b, int id);

    std::string firstName;
    std::string lastName;

    std::unique_ptr<Date> birthDay;
    int id;
    char seria[];

public:
    Passport(const std::string& name, const std::string& lastName, int day, int month, int year);
    ~Passport();

    void show();

    static void setSeria(char a, char b, int newId = 1);
};

std::string toString(char a, char b, int id);
