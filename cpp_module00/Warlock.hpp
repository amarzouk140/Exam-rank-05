#ifndef WARLOCK_HPP
#define WARLOCK_HPP


#include <iostream>
#include <string>
#include <map>

class Warlock
{
    private:
    Warlock();
    Warlock(const Warlock& other);
    Warlock& operator=(const Warlock&other);
    std::string name;
    std::string title;

    public:
    Warlock(const std::string& n, const std::string& t);
    ~Warlock();
    std::string const& getName(void) const;
    std::string const& getTitle(void) const;

    void setTitle(const std::string& t);
    void introduce() const;
};
#endif 