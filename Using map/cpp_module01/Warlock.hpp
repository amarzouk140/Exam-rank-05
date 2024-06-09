#ifndef WARLOCK_HPP
#define WARLOCK_HPP


#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
    private:
    Warlock();
    Warlock(const Warlock& other);
    Warlock& operator=(const Warlock&other);
    std::string name;
    std::string title;
    std::map <std::string, ASpell*> spells;

    public:
    Warlock(const std::string& n, const std::string& t);
    ~Warlock();
    const std::string& getName(void) const;
    const std::string& getTitle(void) const;

    void setTitle(const std::string& t);
    void introduce() const;

    void learnSpell(ASpell* s);
    void forgetSpell(const std::string name);
    void launchSpell(const std::string name, const ATarget& t);
};
#endif 