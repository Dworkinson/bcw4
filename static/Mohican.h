#pragma once
#include <iostream>

class Mohican
{
private:
    Mohican* selfPointer;

    std::string name;
    static Mohican* lastMohican;

public:
    Mohican(const std::string& name);
    ~Mohican();

    Mohican(const Mohican& copy);
    Mohican& operator=(const Mohican& copy);

    static Mohican* getLastMohican();

    void show() const;
};
