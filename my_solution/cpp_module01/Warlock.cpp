#include "Warlock.hpp"


    Warlock::Warlock(){}
    Warlock::Warlock(const Warlock& other){(void)other;}
    Warlock& Warlock::operator=(const Warlock&other){(void)other; return *this;}


    Warlock::Warlock(const std::string& n, const std::string& t)
    {
        name = n;
        title = t;
        std::cout << name << ": This looks like another boring day." << std::endl;
    }
    Warlock::~Warlock()
    {
        std::cout << name << ": My job here is done!" << std::endl;
    }
    std::string const& Warlock::getName(void) const
    {
        return name;
    }
    std::string const& Warlock::getTitle(void) const
    {
        return title;
    }

    void Warlock::setTitle(const std::string& t)
    {
        title = t;
    }
    void Warlock::introduce() const
    {
std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
    }

    void Warlock::learnSpell(ASpell* s)
    {
        if (s)
        spellBook[s->getName()] = s->clone();
    }
    void Warlock::forgetSpell(std::string name)
    {
        if (spellBook.find(name) != spellBook.end())
                spellBook.erase(name);
    }
    void Warlock::launchSpell(std::string name, const ATarget& t)
    {
        if (spellBook.find(name) != spellBook.end())
        spellBook[name]->lanuch(t);
    }