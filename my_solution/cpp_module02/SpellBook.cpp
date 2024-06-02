#include "SpellBook.hpp"


    SpellBook::SpellBook(){}
    SpellBook::SpellBook(const SpellBook& other){(void)other;}
    SpellBook& SpellBook::operator=(const SpellBook&other){(void)other; return *this;}
    SpellBook::~SpellBook(){}

    void SpellBook::learnSpell(ASpell* s)
    {
        if (s)
        spellB[s->getName()] = s->clone();
    }
    void SpellBook::forgetSpell(std::string const &name)
    {
        if (spellB.find(name) != spellB.end())
                spellB.erase(name);
    }
    ASpell* SpellBook::createSpell(std::string const &name)
    {
        ASpell *test = NULL;
        if (spellB.find(name) != spellB.end())
        test = spellB[name];
        return test;
    }