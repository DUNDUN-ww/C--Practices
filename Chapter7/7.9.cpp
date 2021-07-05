#include <string>
#include <iostream>
using namespace std;

struct Person
{
    string const& getName()    const { return name; }
    string const& getAddress() const { return address; }

    string name;
    string address;
};

istream& read(istream& is, Person& person)
{
    return is >> person.name >> person.address;
}

ostream& print(ostream& os, const Person& person)
{
    return os << person.name << " " << person.address;
}
