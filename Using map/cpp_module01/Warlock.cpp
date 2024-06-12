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
        
        for (std::map<std::string, ASpell*>::iterator it = spells.begin(); it != spells.end(); ++it) 
            delete it->second;
        spells.clear();
    }
    const std::string& Warlock::getName(void) const
    {
        return name;
    }
    const std::string& Warlock::getTitle(void) const
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
     {
        if (spells.find(s->getName()) == spells.end()) 
        {
            spells[s->getName()] = s->clone();
        }
    }
    }
    void Warlock::forgetSpell(const std::string name)
    {
    std::map<std::string, ASpell*>::iterator it = spells.find(name);
    if (it != spells.end())
    {
        delete it->second;
        spells.erase(it);
    }
    }
    void Warlock::launchSpell(const std::string name, const ATarget& t)
    {
        if (spells.find(name) != spells.end())
        spells[name]->launch(t);
    }