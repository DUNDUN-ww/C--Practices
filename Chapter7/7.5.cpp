#include <string>
using namespace std;
class Person
{
    string name;
    string address;
public:
    auto get_name() const -> string const& { return name; }
    auto get_addr() const -> string const& { return address; }
};
