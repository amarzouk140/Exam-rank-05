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

void Warlock::learnSpell(ASpell* spell) 
{
    if (spell) {
        spellBook.learnSpell(spell);
    }
}

void Warlock::forgetSpell(const std::string& spellName) 
{
    spellBook.forgetSpell(spellName);
}

void Warlock::launchSpell(const std::string& spellName, const ATarget& target) 
{
    ASpell* spell = spellBook.createSpell(spellName);
    if (spell) 
    {
        spell->launch(target);
        delete spell;
    }
}