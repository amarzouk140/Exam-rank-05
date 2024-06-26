#include "SpellBook.hpp"


    SpellBook::SpellBook(){}
    SpellBook::SpellBook(const SpellBook& other){(void)other;}
    SpellBook& SpellBook::operator=(const SpellBook&other){(void)other; return *this;}
    SpellBook::~SpellBook()
    {
    for (std::map<std::string, ASpell*>::iterator it = spells.begin(); it != spells.end(); ++it) {
        delete it->second;
    }
    spells.clear();
    }

    void SpellBook::learnSpell(ASpell* spell)
    {
    if (spell) 
    {
        if (spells.find(spell->getName()) != spells.end())
            delete spells[spell->getName()];

        spells[spell->getName()] = spell->clone();
    }
    }
    void SpellBook::forgetSpell(const std::string& name)
    {
        std::map<std::string, ASpell*>::iterator it = spells.find(name);
    if (it != spells.end()) 
    {
        delete it->second;
        spells.erase(it);
    }
    }
    ASpell* SpellBook::createSpell(const std::string& name)
    {
        std::map<std::string, ASpell*>::const_iterator it = spells.find(name);
        if (it != spells.end()) 
        {
        return it->second->clone();
        }
    return NULL;
    }