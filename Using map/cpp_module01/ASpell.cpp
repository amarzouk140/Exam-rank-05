#include "ASpell.hpp"


    ASpell::ASpell(){}
    ASpell::ASpell(const ASpell& other) : name(other.name), effects(other.effects) {}
    ASpell& ASpell::operator=(const ASpell&other)
    {    
    if (this != &other) 
    {
        name = other.name;
        effects = other.effects;
    }
    return *this;
    }


    ASpell::ASpell(const std::string& n, const std::string& t)
    {
        name = n;
        effects = t;
    }
    ASpell::~ASpell()
    {    }
    std::string const& ASpell::getName(void) const
    {
        return name;
    }
    std::string const& ASpell::getEffects(void) const
    {
        return effects;
    }

    void ASpell::launch (const ATarget& t) const
    {
        t.getHitBySpell(*this);
    }
