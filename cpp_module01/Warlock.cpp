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
     {
        // Check if the spell already exists in the map
        if (spells.find(s->getName()) != spells.end()) {
            // Delete the old spell to prevent memory leak
            delete spells[s->getName()];
        }
        // Clone the new spell and add it to the map
        spells[s->getName()] = s->clone();
    }
    }
    void Warlock::forgetSpell(const std::string& name)
    {
    std::map<std::string, ASpell*>::iterator it = spells.find(name);
    if (it != spells.end())
    {
        delete it->second;
        spells.erase(it);
    }
    }
    void Warlock::launchSpell(const std::string& name, const ATarget& t)
    {
        if (spells.find(name) != spells.end())
        spells[name]->launch(t);
    }