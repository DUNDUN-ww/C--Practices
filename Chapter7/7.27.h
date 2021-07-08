#include <string>
#include <iostream>

class Screen {
public:
    ... ...

    inline Screen& move(pos r, pos c);
    inline Screen& set(char c);
    inline Screen& set(pos r, pos c, char ch);

    const Screen& display(std::ostream &os) const { do_display(os); return *this; }
    Screen& display(std::ostream &os) { do_display(os); return *this; }

private:
    void do_display(std::ostream &os) const { os << contents; }

    ... ...
};

inline Screen& Screen::move(pos r, pos c)
{
    cursor = r*width + c;
    return *this;
}

inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos r, pos c, char ch)
{
    contents[r*width+c] = ch;
    return *this;
}
